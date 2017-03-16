#pragma once

#include <cassert>
#include <cstdint>
#include <memory>
#include <vector>

using std::shared_ptr;

#include "tensor.h"

namespace da {
	namespace runtime {
		namespace converter {
			shared_ptr<Tensor> toTensor(const std::vector<uint8_t>& input) {
				assert(false);

				return nullptr;
			}

			shared_ptr<Tensor> toTensor(const std::vector<std::vector<uint8_t>>& input) {
				assert(false);

				return nullptr;
			}
		}
	}
}