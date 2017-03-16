#pragma once

#include <cstdint>
#include <cassert>
#include <vector>
#include <memory>
using std::shared_ptr;

#include "mnist_reader_less.hpp"

namespace da {
	namespace dataset {
		namespace mnist {
			namespace train {
				class TrainBatch {
				public:
					std::vector<std::vector<uint8_t>> images;
					std::vector<uint8_t> labels;
				};

				shared_ptr<TrainBatch> next_train_batch(const MNIST_dataset<>& dataset, int batchSize) {
					assert(false);
					return nullptr;
				}
			}
		}
	}
}