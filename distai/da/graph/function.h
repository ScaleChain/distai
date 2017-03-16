#pragma once

#include <cassert>
#include <memory>
using std::unique_ptr;

#include "node.h"
#include "type.h"


namespace da {
	namespace graph {
		namespace fun {
			unique_ptr<node::TensorNode> rowmul(unique_ptr<node::TensorNode> left, unique_ptr<node::TensorNode> right) {
				assert(false);
				return nullptr;
			}

			unique_ptr<node::TensorNode> matmul(unique_ptr<node::TensorNode> left, unique_ptr<node::TensorNode> right) {
				assert(false);
				return nullptr;
			}

			unique_ptr<node::TensorNode> matadd(unique_ptr<node::TensorNode> left, unique_ptr<node::TensorNode> right) {
				assert(false);
				return nullptr;
			}

			unique_ptr<node::TensorNode> equal(unique_ptr<node::TensorNode> left, unique_ptr<node::TensorNode> right) {
				assert(false);
				return nullptr;
			}

			unique_ptr<node::TensorNode> softmax(unique_ptr<node::TensorNode> tensor) {
				assert(false);
				return nullptr;
			}

			unique_ptr<node::TensorNode> reduce_sum(unique_ptr<node::TensorNode> tensor) {
				assert(false);
				return nullptr;
			}

			unique_ptr<node::TensorNode> reduce_mean(unique_ptr<node::TensorNode> tensor) {
				assert(false);
				return nullptr;
			}

			unique_ptr<node::TensorNode> log(unique_ptr<node::TensorNode> tensor) {
				assert(false);
				return nullptr;
			}

			unique_ptr<node::TensorNode> negate(unique_ptr<node::TensorNode> tensor) {
				assert(false);
				return nullptr;
			}

			unique_ptr<node::TensorNode> argmax(unique_ptr<node::TensorNode> tensor, int dimension) {
				assert(false);
				return nullptr;
			}

			unique_ptr<node::TensorNode> cast(unique_ptr<node::TensorNode> tensor, const type::DataType& targetType) {
				assert(false);
				return nullptr;
			}
		}
	}
}