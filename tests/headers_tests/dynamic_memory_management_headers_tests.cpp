#include "tests/headers_tests/dynamic_memory_management_headers_tests.hpp"

#include "tests/new/new_mini.hpp"
#include "tests/new/new_full.hpp"

#include "tests/memory/memory_mini.hpp"
#include "tests/memory/memory_full.hpp"

#include "tests/scoped_allocator/scoped_allocator_mini.hpp"
#include "tests/scoped_allocator/scoped_allocator_full.hpp"

#include "tests/memory_resource/memory_resource_mini.hpp"
#include "tests/memory_resource/memory_resource_full.hpp"

//------------------------------------------------------------------------------

namespace dynamic_memory_management_headers_tests {

//------------------------------------------------------------------------------

void run()
{
	new_tests::run_mini();
	new_tests::run_full();

	memory_tests::run_mini();
	memory_tests::run_full();

	scoped_allocator_tests::run_mini();
	scoped_allocator_tests::run_full();

	memory_resource_tests::run_mini();
	memory_resource_tests::run_full();
}

//------------------------------------------------------------------------------

}
