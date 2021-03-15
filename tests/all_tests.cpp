#include "all_tests.hpp"

#include "tests/headers_tests/container_headers_tests.hpp"
#include "tests/headers_tests/utility_headers_tests.hpp"
#include "tests/headers_tests/string_headers_tests.hpp"
#include "tests/headers_tests/filesystem_headers_tests.hpp"
#include "tests/headers_tests/thread_headers_tests.hpp"
#include "tests/headers_tests/atomic_headers_tests.hpp"
#include "tests/headers_tests/dynamic_memory_management_headers_tests.hpp"
#include "tests/headers_tests/regex_headers_tests.hpp"
#include "headers_tests/error_handling_headers_tests.hpp"
#include "headers_tests/iterator_headers_tests.hpp"
#include "headers_tests/localization_headers_tests.hpp"
#include "headers_tests/numeric_headers_tests.hpp"

//------------------------------------------------------------------------------

namespace all_tests {

//------------------------------------------------------------------------------

void run()
{
	container_headers_tests::run();
	utility_headers_tests::run();
	string_headers_tests::run();
	filesystem_headers_tests::run();
	thread_headers_tests::run();
	atomic_headers_tests::run();
	dynamic_memory_management_headers_tests::run();
	regex_headers_tests::run();
	error_handling_headers_tests::run();
	iterator_headers_tests::run();
	localization_headers_tests::run();
	numeric_headers_tests::run();
}

//------------------------------------------------------------------------------

}
