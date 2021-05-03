#include "tests/headers_tests/algorithms_headers_tests.hpp"

#include "tests/execution/execution_mini.hpp"
#include "tests/execution/execution_full.hpp"

//------------------------------------------------------------------------------

namespace algorithms_headers_tests {

//------------------------------------------------------------------------------

void run()
{
	execution_tests::run_mini();
	execution_tests::run_full();
}

//------------------------------------------------------------------------------

}
