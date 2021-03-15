#include "tests/memory/memory_full.hpp"

#include "tests/memory/memory_fwd.hpp"

#include <memory>

//------------------------------------------------------------------------------

namespace memory_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	std::allocator< int > allocator = testObj.getAllocator();
	(void)allocator;

	#ifdef STDFWD_IS_POINTER_TRAITS
	std::pointer_traits< std::shared_ptr<int> > pointer_traits =
	testObj.getPointerTraits();
	(void)pointer_traits;
	#endif

	#ifdef STDFWD_IS_POINTER_TRAITS
	std::pointer_safety pointer_safety = testObj.getPointerSafety();
	(void)pointer_safety;
	#endif

	#ifdef STDFWD_IS_ALLOCATOR_TRAITS
	std::allocator_traits< std::allocator< int > > allocator_traits =
	testObj.getAllocatorTraits();
	(void)allocator_traits;
	#endif

	#ifdef STDFWD_IS_POINTER_TRAITS
	std::allocator_arg_t allocator_arg_t = testObj.getAllocatorArgT();
	(void)allocator_arg_t;
	#endif

	#ifdef STDFWD_IS_POINTER_TRAITS
	std::uses_allocator< stdfwd::vector< int >, std::allocator< int > >
	uses_allocator = testObj.getUsesAllocator();
	(void)uses_allocator;
	#endif

	#ifdef STDFWD_IS_UNIQUE_PTR
	std::unique_ptr< int > unique_ptr = testObj.getUniquePtr();
	(void)unique_ptr;
	#endif

	#ifdef STDFWD_IS_SHARED_PTR
	std::shared_ptr< int > shared_ptr = testObj.getSharedPtr();
	(void)shared_ptr;
	#endif

	#ifdef STDFWD_IS_WEAK_PTR
	std::weak_ptr< int > weak_ptr = testObj.getWeakPtr();
	(void)weak_ptr;
	#endif

	#ifdef STDFWD_IS_AUTO_PTR
	std::auto_ptr< int > auto_ptr = testObj.getAutoPtr();
	(void)auto_ptr;
	#endif

	#ifdef STDFWD_IS_WEAK_PTR
	auto & enable_shared_from_this = testObj.getEnableSharedFromThis();
	(void)enable_shared_from_this;
	#endif

	#ifdef STDFWD_IS_BAD_WEAK_PTR
	std::bad_weak_ptr bad_weak_ptr = testObj.getBadWeakPtr();
	(void)bad_weak_ptr;
	#endif

	#ifdef STDFWD_IS_DEFAULT_DELETE
	std::default_delete< int > default_delete = testObj.getDefaultDelete();
	(void)default_delete;
	#endif

}

//------------------------------------------------------------------------------

}
