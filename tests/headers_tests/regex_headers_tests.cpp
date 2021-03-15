#include "tests/headers_tests/regex_headers_tests.hpp"

#include "tests/regex/regex_mini.hpp"
#include "tests/regex/regex_full.hpp"

//------------------------------------------------------------------------------

namespace regex_headers_tests {

//------------------------------------------------------------------------------

void run()
{
	regex_tests::run_mini();
	regex_tests::run_full();
}

//------------------------------------------------------------------------------

}
