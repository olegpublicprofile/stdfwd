#include "tests/headers_tests/iterator_headers_tests.hpp"

#include "tests/iterator/iterator_mini.hpp"
#include "tests/iterator/iterator_full.hpp"

//------------------------------------------------------------------------------

namespace iterator_headers_tests {

//------------------------------------------------------------------------------

void run()
{
	iterator_tests::run_mini();
	iterator_tests::run_full();
}

//------------------------------------------------------------------------------

}
