// distai.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <boost/locale.hpp>
#include <iostream>
#include <ctime>

#include "gtest/gtest.h"
#include "da/da.h"


using namespace da;

int main(int argc, char **argv)
{
	::testing::InitGoogleTest(&argc, argv);
	//::testing::GTEST_FLAG(filter) = "Test_Cases1*";
	auto result = RUN_ALL_TESTS();

	// wait for a key input
	std::string a;
	std::cin >> a;
	return result;

	/*
	  struct a { int f; };
	  a x = a{ 1 };
	*/

	auto dataset = dataset::mnist::read_dataset();

	auto x = graph::placeholder("x", type::Float, {-1, 784 } );
	auto W = graph::variable(graph::zeros( { 784, 10 } ));
	auto b = graph::variable(graph::zeros( { 10} ));

	auto y = graph::fun::softmax(graph::fun::matadd(graph::fun::matmul(M(x), M(W)), M(b)));
	auto y_ = graph::placeholder("y_", type::Float, { -1, 10 });

	auto cross_entropy = graph::fun::negate(graph::fun::reduce_sum(graph::fun::rowmul( M(y_), graph::fun::log( M(y) )) ) );
	auto optimizer = graph::opt::GradientDescentOptimizer::create(0.01f);
	auto train_step = optimizer->minimize( M(cross_entropy) );

	auto sess = runtime::Session::create();
	train_step->initialize();

	for (int i = 0; i < 1000; i++) {
		auto batch = dataset::mnist::train::next_train_batch(dataset, 100);
		std::map<string, shared_ptr<runtime::Tensor>> feed_dict;
		feed_dict["x"] = runtime::converter::toTensor(batch->images);
		feed_dict["y_"] = runtime::converter::toTensor(batch->labels);

		sess->run( M(train_step), feed_dict);
	}

	{
		auto correct_prediction = graph::fun::equal(graph::fun::argmax( M(y), 1), graph::fun::argmax( M(y_), 1));
		auto accuracy = graph::fun::reduce_mean(graph::fun::cast( M(correct_prediction), type::Float));
		

		std::map<string, shared_ptr<runtime::Tensor>> feed_dict;
		feed_dict["x"] = runtime::converter::toTensor(dataset.test_images);
		feed_dict["y_"] = runtime::converter::toTensor(dataset.test_labels);
		
		auto accuracy_result = sess->run( M(accuracy), feed_dict);
	}
	
	return 0;
}

