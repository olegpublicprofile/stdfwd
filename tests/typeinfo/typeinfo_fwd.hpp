#pragma once

#include <stdfwd/typeinfo>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP11
	#define STDFWD_IS_TYPE_INDEX
#endif

//------------------------------------------------------------------------------

namespace typeinfo_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	std::bad_cast getBadCast();
	std::bad_typeid getBadTypeid();
};

//------------------------------------------------------------------------------

}
