#include "tests/memory/memory_fwd.hpp"

#include <memory>
#include <string>

//------------------------------------------------------------------------------

namespace memory_tests {

//------------------------------------------------------------------------------

class TestClass::Internal : public std::enable_shared_from_this< Internal >{};

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

std::allocator< int > TestClass::getAllocator()
{
	return std::allocator< int >();
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_POINTER_TRAITS
std::pointer_traits< std::shared_ptr<int> > TestClass::getPointerTraits()
{
	return std::pointer_traits< std::shared_ptr<int> >();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_POINTER_TRAITS
std::pointer_safety TestClass::getPointerSafety()
{
	return std::pointer_safety();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_ALLOCATOR_TRAITS
std::allocator_traits< std::allocator< int > > TestClass::getAllocatorTraits()
{
	return std::allocator_traits< std::allocator< int > >();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_POINTER_TRAITS
std::allocator_arg_t TestClass::getAllocatorArgT()
{
	return std::allocator_arg_t();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_POINTER_TRAITS
std::uses_allocator< stdfwd::vector< int >, std::allocator< int > >
TestClass::getUsesAllocator()
{
	return std::uses_allocator< stdfwd::vector< int >, std::allocator< int > >();
}
#endif

//------------------------------------------------------------------------------

std::raw_storage_iterator<std::string*, std::string>
TestClass::getRawStorageIterator()
{
	static std::string * p = nullptr;
	return std::raw_storage_iterator<std::string*, std::string>( p );
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_UNIQUE_PTR
stdfwd::unique_ptr< int > TestClass::getUniquePtr()
{
	return std::unique_ptr< int >();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_SHARED_PTR
std::shared_ptr< int > TestClass::getSharedPtr()
{
	return std::shared_ptr< int >();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_WEAK_PTR
std::weak_ptr< int > TestClass::getWeakPtr()
{
	return std::weak_ptr< int >();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_AUTO_PTR
std::auto_ptr< int > TestClass::getAutoPtr()
{
	return std::auto_ptr< int >();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_ENABLE_SHARED_FROM_THIS
std::enable_shared_from_this< TestClass::Internal > &
TestClass::getEnableSharedFromThis()
{
	static Internal s_obj;
	return s_obj;
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_BAD_WEAK_PTR
std::bad_weak_ptr TestClass::getBadWeakPtr()
{
	return std::bad_weak_ptr();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_DEFAULT_DELETE
std::default_delete< int > TestClass::getDefaultDelete()
{
	return std::default_delete< int >();
}
#endif

//------------------------------------------------------------------------------

}
