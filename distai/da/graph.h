#pragma once

#include <cassert>
#include <string>
#include <memory>
using std::string;
using std::unique_ptr;

#include "graph/type.h"
#include "graph/node.h"
#include "graph/function.h"
#include "graph/optimizer.h"

namespace da {
	namespace graph {
		unique_ptr<node::PlaceHolder> placeholder(const string & name, const type::DataType & type, const std::initializer_list<int> dimensions) {
			assert(false);
			return nullptr;
		};

		unique_ptr<node::VariableInitialization> zeros(const std::initializer_list<int> dimensions) {
			assert(false);
			return nullptr;
		}

		unique_ptr<node::Variable> variable(unique_ptr<node::VariableInitialization> varInitDesc) {
			assert(false);
			return nullptr;
		}
	}
}
