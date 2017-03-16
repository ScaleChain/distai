#pragma once

#include <cassert>
#include <memory>
using std::shared_ptr;

#include "../graph/node.h"
#include "da/common.h"

namespace da {
	namespace runtime {
		class Session {
		public:
			static shared_ptr<Session> create() {
				assert(false);
				return nullptr;
			}
			shared_ptr<runtime::Tensor> run(unique_ptr<graph::node::TensorNode> node, const std::map<string, shared_ptr<runtime::Tensor>>& dict) {
				assert(false);
				return nullptr;
			}
			COMMON_MEMBERS(Session)
		};
	}
}