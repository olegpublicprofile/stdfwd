#include "tests/memory_resource/memory_resource_full.hpp"

#include "tests/memory_resource/memory_resource_fwd.hpp"

#ifdef STDFWD_IS_CPP17
	#if __has_include(<memory_resource>)
		#include <memory_resource>
	#endif
#endif

//------------------------------------------------------------------------------

namespace memory_resource_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_POLYMORPHIC_ALLOCATOR
	auto polymorphic_allocator = testObj.getPolymorphicAllocator();
	(void)polymorphic_allocator;
	#endif

	#ifdef STDFWD_IS_MEMORY_RESOURCE
	auto & memory_resource = testObj.getMemoreResource();
	(void)memory_resource;
	#endif

	#ifdef STDFWD_IS_SYNCHRONIZED_POOL_RESOURCE
	auto synchronized_pool_resource = testObj.getSynchronizedPoolResource();
	(void)synchronized_pool_resource;
	#endif

	#ifdef STDFWD_IS_UNSYNCHRONIZED_POOL_RESOURCE
	auto unsynchronized_pool_resource = testObj.getUnsynchronizedPoolResource();
	(void)unsynchronized_pool_resource;
	#endif

	#ifdef STDFWD_IS_MONOTONIC_BUFFER_RESOURCEE
	auto monotonic_buffer_resource = testObj.getMonotonicBufferResource();
	(void)monotonic_buffer_resource;
	#endif

	#ifdef STDFWD_IS_POOL_OPTIONS
	auto pool_options = testObj.getPoolOptions();
	(void)pool_options;
	#endif
}

//------------------------------------------------------------------------------

}
