#pragma once

#include <stdfwd/memory>
#include <stdfwd/vector>
#include <stdfwd/string>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP11
	#define STDFWD_IS_POINTER_TRAITS
	#define STDFWD_IS_POINTER_SAFETY
	#define STDFWD_IS_ALLOCATOR_TRAITS
	#define STDFWD_IS_ALLOCATOR_ARG_T
	#define STDFWD_IS_USES_ALLOCATOR
	#define STDFWD_IS_UNIQUE_PTR
	#define STDFWD_IS_SHARED_PTR
	#define STDFWD_IS_WEAK_PTR
	#define STDFWD_IS_ENABLE_SHARED_FROM_THIS
	#define STDFWD_IS_BAD_WEAK_PTR
	#define STDFWD_IS_DEFAULT_DELETE
#endif

#define STDFWD_IS_AUTO_PTR

#ifdef STDFWD_IS_CPP17
	#undef STDFWD_IS_AUTO_PTR
#endif

//------------------------------------------------------------------------------

namespace memory_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	std::allocator< int > getAllocator();

	#ifdef STDFWD_IS_POINTER_TRAITS
	std::pointer_traits< std::shared_ptr<int> > getPointerTraits();
	#endif

	#ifdef STDFWD_IS_POINTER_TRAITS
	std::pointer_safety getPointerSafety();
	#endif

	#ifdef STDFWD_IS_ALLOCATOR_TRAITS
	std::allocator_traits< std::allocator< int > >
	getAllocatorTraits();
	#endif

	#ifdef STDFWD_IS_POINTER_TRAITS
	std::allocator_arg_t getAllocatorArgT();
	#endif

	#ifdef STDFWD_IS_POINTER_TRAITS
	std::uses_allocator< stdfwd::vector< int >, std::allocator< int > >
	getUsesAllocator();
	#endif

	std::raw_storage_iterator<std::string*, std::string>
	getRawStorageIterator();

	#ifdef STDFWD_IS_UNIQUE_PTR
	stdfwd::unique_ptr< int > getUniquePtr();
	#endif

	#ifdef STDFWD_IS_SHARED_PTR
	std::shared_ptr< int > getSharedPtr();
	#endif

	#ifdef STDFWD_IS_WEAK_PTR
	std::weak_ptr< int > getWeakPtr();
	#endif

	#ifdef STDFWD_IS_AUTO_PTR
	std::auto_ptr< int > getAutoPtr();
	#endif

	#ifdef STDFWD_IS_ENABLE_SHARED_FROM_THIS
	class Internal;
	std::enable_shared_from_this< Internal > & getEnableSharedFromThis();
	#endif

	#ifdef STDFWD_IS_BAD_WEAK_PTR
	std::bad_weak_ptr getBadWeakPtr();
	#endif

	#ifdef STDFWD_IS_DEFAULT_DELETE
	std::default_delete< int > getDefaultDelete();
	#endif

};

//------------------------------------------------------------------------------

}
