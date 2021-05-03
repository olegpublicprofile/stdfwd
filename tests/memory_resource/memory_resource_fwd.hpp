#pragma once

#include <stdfwd/memory_resource>

//------------------------------------------------------------------------------

#ifdef __has_include
	#if __has_include(<version>)
		#include <version>
	#endif
#endif

//------------------------------------------------------------------------------

#ifdef __cpp_lib_memory_resource
	#if STDFWD_CPP_VERSION >= __cpp_lib_memory_resource
		#define STDFWD_IS_MEMORY_RESOURCE
		#define STDFWD_IS_SYNCHRONIZED_POOL_RESOURCE
		#define STDFWD_IS_UNSYNCHRONIZED_POOL_RESOURCE
		#define STDFWD_IS_MONOTONIC_BUFFER_RESOURCEE
		#define STDFWD_IS_POOL_OPTIONS
		#define STDFWD_IS_POLYMORPHIC_ALLOCATOR
	#endif
#endif

//------------------------------------------------------------------------------

namespace memory_resource_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	#ifdef STDFWD_IS_POLYMORPHIC_ALLOCATOR
	stdfwd::pmr::polymorphic_allocator< int > getPolymorphicAllocator();
	#endif

	#ifdef STDFWD_IS_MEMORY_RESOURCE
	std::pmr::memory_resource & getMemoreResource();
	#endif

	#ifdef STDFWD_IS_SYNCHRONIZED_POOL_RESOURCE
	std::pmr::synchronized_pool_resource getSynchronizedPoolResource();
	#endif

	#ifdef STDFWD_IS_UNSYNCHRONIZED_POOL_RESOURCE
	std::pmr::unsynchronized_pool_resource getUnsynchronizedPoolResource();
	#endif

	#ifdef STDFWD_IS_MONOTONIC_BUFFER_RESOURCEE
	std::pmr::monotonic_buffer_resource getMonotonicBufferResource();
	#endif

	#ifdef STDFWD_IS_POOL_OPTIONS
	std::pmr::pool_options getPoolOptions();
	#endif
};

//------------------------------------------------------------------------------

}
