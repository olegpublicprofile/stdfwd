#pragma once

#include <stdfwd/list>

//------------------------------------------------------------------------------

namespace list_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	stdfwd::list< int > getList();
};

//------------------------------------------------------------------------------

}