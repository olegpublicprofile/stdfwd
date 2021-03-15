#pragma once

#include <stdfwd/scoped_allocator>
#include <stdfwd/memory>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP11
	#define STDFWD_IS_SCOPED_ALLOCATOR_ADAPTOR
#endif

//------------------------------------------------------------------------------

namespace scoped_allocator_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	#ifdef STDFWD_IS_SCOPED_ALLOCATOR_ADAPTOR
	std::scoped_allocator_adaptor< std::allocator< int > >
	getScopedAllocatorAdaptor();
	#endif

};

//------------------------------------------------------------------------------

}
