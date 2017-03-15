// distai.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include "gtest/gtest.h"

#include "mnist/mnist_reader_less.hpp"

#include <boost/locale.hpp>
#include <iostream>
#include <ctime>

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

	/*
	auto dataset = mnist::read_dataset();

	auto x = da.placeholder("x", da.types.Float, -1, 784);
	auto W = da.variable(da.zeros(784, 10));
	auto b = da.variable(da.zeros(10));

	auto y = da.nn.softmax(da.matmul(x, W) + b);
	auto y_ = da.placeholder("y_", da.types.Float, -1, 10);

	auto cross_entropy = -da.reduce_sum(y_ * da.log(y));
	auto train_step = da.train.GradientDescentOptimizer(0.01).minimize(cross_entropy);

	auto sess = da.Session();
	auto sess.run(da.initialize_all_variables())

	for (int i = 0; i < 1000; i++) {
		auto batch = mnist.train.next_batch(100);
		std::map<string, const da.types.Tensor&> feed_dict;
		feed_dict["x"] = batch.xs;
		feed_dict["y_"] = batch.ys;

		sess.run(train_step, feed_dict);
	}

	{
		auto correct_prediction = da.equal(da.argmax(y, 1), df.argmax(y_, 1));
		auto accuracy = da.reduce_mean(da.cast(correct_prediction, da.types.Float));
		

		std::map<string, const da.types.Tensor&> feed_dict;
		feed_dict["x"] = dataset.test_images;
		feed_dict["y_"] = dataset.test_labels;
		
		auto accuracy_result = sess.run(accuracy, feed_dict ]);
	}
	
	*/
	return 0;
}

