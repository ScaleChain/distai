#pragma once

#include <cassert>
#include <string>
#include <memory>
using std::string;
using std::unique_ptr;

#include "node.h"
#include "da/common.h"

namespace da {
	namespace graph {
		namespace opt {
			class GradientDescentOptimizer {
			public:
				static unique_ptr<GradientDescentOptimizer> create(float learningRate) {
					assert(false);
					return nullptr;
				}
				unique_ptr<node::TensorNode> minimize(unique_ptr<node::TensorNode> tensor) {
					assert(false);
					return nullptr;
				}

				COMMON_MEMBERS(GradientDescentOptimizer)
			};
		}
	}
}