#include "tests/scoped_allocator/scoped_allocator_full.hpp"

#include "tests/scoped_allocator/scoped_allocator_fwd.hpp"

#include <scoped_allocator>

//------------------------------------------------------------------------------

namespace scoped_allocator_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_SCOPED_ALLOCATOR_ADAPTOR
	auto scoped_allocator_adaptor = testObj.getScopedAllocatorAdaptor();
	(void)scoped_allocator_adaptor;
	#endif
}

//------------------------------------------------------------------------------

}
