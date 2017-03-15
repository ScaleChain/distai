#include "stdafx.h"
#include "gtest/gtest.h"
#include "mnist/mnist_reader_less.hpp"
//#include "mnist/mnist_reader.hpp"
#include "boost/filesystem.hpp"

TEST(MNISTTest, read) {
	//std::cout << boost::filesystem::current_path();
	auto dataset = mnist::read_dataset();

	std::cout << "dataset loaded" << std::endl;
	std::cout << "test images count : " << dataset.test_images.size() << std::endl;
	std::cout << "test labels count : " << dataset.test_labels.size() << std::endl;
	std::cout << "training images count : " << dataset.training_images.size() << std::endl;
	std::cout << "training labels count : " << dataset.training_labels.size() << std::endl;

	//auto dataset = mnist::read_dataset<std::vector, std::vector, uint8_t, uint8_t>();
	EXPECT_EQ(10000, dataset.test_images.size());
	EXPECT_EQ(10000, dataset.test_labels.size());
	EXPECT_EQ(60000, dataset.training_images.size());
	EXPECT_EQ(60000, dataset.training_labels.size());
}

