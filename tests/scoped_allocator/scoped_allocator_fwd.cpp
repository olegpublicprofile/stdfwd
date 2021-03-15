#include "tests/scoped_allocator/scoped_allocator_fwd.hpp"

#include <scoped_allocator>

//------------------------------------------------------------------------------

namespace scoped_allocator_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_SCOPED_ALLOCATOR_ADAPTOR
std::scoped_allocator_adaptor< std::allocator< int > >
TestClass::getScopedAllocatorAdaptor()
{
	return std::scoped_allocator_adaptor< std::allocator< int > >();
}
#endif

//------------------------------------------------------------------------------

}
