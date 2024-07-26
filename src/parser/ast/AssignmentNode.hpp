#pragma once

#include <string>
#include <sstream>
#include "ASTNode.hpp"

using namespace std;

namespace Theta {
    class AssignmentNode : public ASTNode {
        public:
            AssignmentNode() : ASTNode(ASTNode::ASSIGNMENT) {};

            string toJSON() const override {
                ostringstream oss;

                oss << "{";
                oss << "\"type\": \"" << getNodeTypePretty() << "\"";
                oss << ", \"left\": " << (left ? left->toJSON() : "null");
                oss << ", \"right\": " << (right ? right->toJSON() : "null");
                oss << "}";

                return oss.str();
            }
    };

}
