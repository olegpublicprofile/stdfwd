#include "tests/memory_resource/memory_resource_fwd.hpp"

#ifdef STDFWD_IS_CPP17
	#if __has_include(<memory_resource>)
		#include <memory_resource>
	#endif
#endif

//------------------------------------------------------------------------------

namespace memory_resource_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_POLYMORPHIC_ALLOCATOR
stdfwd::pmr::polymorphic_allocator< int > TestClass::getPolymorphicAllocator()
{
	return std::pmr::polymorphic_allocator< int >();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_MEMORY_RESOURCE
std::pmr::memory_resource & TestClass::getMemoreResource()
{
	class Temp : public std::pmr::memory_resource
	{
		void * do_allocate( size_t , size_t ) override { return nullptr; };
		void do_deallocate( void *, size_t , size_t ) override {};
		bool do_is_equal( const memory_resource& ) const noexcept override { return false; };
	};

	static Temp temp;

	return temp;
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_SYNCHRONIZED_POOL_RESOURCE
std::pmr::synchronized_pool_resource TestClass::getSynchronizedPoolResource()
{
	return std::pmr::synchronized_pool_resource();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_UNSYNCHRONIZED_POOL_RESOURCE
std::pmr::unsynchronized_pool_resource TestClass::getUnsynchronizedPoolResource()
{
	return std::pmr::unsynchronized_pool_resource();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_MONOTONIC_BUFFER_RESOURCEE
std::pmr::monotonic_buffer_resource TestClass::getMonotonicBufferResource()
{
	return std::pmr::monotonic_buffer_resource();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_POOL_OPTIONS
std::pmr::pool_options TestClass::getPoolOptions()
{
	return std::pmr::pool_options();
}
#endif

//------------------------------------------------------------------------------

}
