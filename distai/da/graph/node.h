#pragma once

#include "da/common.h"

namespace da {
	namespace graph {
		namespace node {
			class Node {
			public :
				virtual void initialize() = 0;
				COMMON_MEMBERS(Node)
			};

			class TensorNode : public Node {
				COMMON_MEMBERS(TensorNode)
			};

			class AddMatrix : public TensorNode {
				COMMON_MEMBERS(AddMatrix)
			};

			class MultiplyMatix : public TensorNode {
				COMMON_MEMBERS(MultiplyMatix)
			};

			class VariableInitialization : public Node {
				COMMON_MEMBERS(VariableInitialization)
			};

			class PlaceHolder : public TensorNode {
				COMMON_MEMBERS(PlaceHolder)
			};

			class Variable : public TensorNode {
				COMMON_MEMBERS(Variable)
			};

			class Function : public TensorNode {
				COMMON_MEMBERS(Function)
			};
		}
	}
}