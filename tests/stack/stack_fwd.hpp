#pragma once

#include <stdfwd/stack>

//------------------------------------------------------------------------------

namespace stack_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	stdfwd::stack< int > getStack();
};

//------------------------------------------------------------------------------

}