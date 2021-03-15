#include "tests/headers_tests/error_handling_headers_tests.hpp"

#include "tests/exception/exception_mini.hpp"
#include "tests/exception/exception_full.hpp"

#include "tests/stdexcept/stdexcept_mini.hpp"
#include "tests/stdexcept/stdexcept_full.hpp"

#include "tests/system_error/system_error_mini.hpp"
#include "tests/system_error/system_error_full.hpp"

//------------------------------------------------------------------------------

namespace error_handling_headers_tests {

//------------------------------------------------------------------------------

void run()
{
	exception_tests::run_mini();
	exception_tests::run_full();

	stdexcept_tests::run_mini();
	stdexcept_tests::run_full();

	system_error_tests::run_mini();
	system_error_tests::run_full();
}

//------------------------------------------------------------------------------

}
