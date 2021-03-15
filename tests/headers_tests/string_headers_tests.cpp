#include "tests/headers_tests/string_headers_tests.hpp"

#include "tests/string/string_mini.hpp"
#include "tests/string/string_full.hpp"

//------------------------------------------------------------------------------

namespace string_headers_tests {

//------------------------------------------------------------------------------

void run()
{
	string_tests::run_mini();
	string_tests::run_full();
}

//------------------------------------------------------------------------------

}
