#include "tests/headers_tests/container_headers_tests.hpp"

#include "tests/atomic/atomic_mini.hpp"
#include "tests/atomic/atomic_full.hpp"

//------------------------------------------------------------------------------

namespace atomic_headers_tests {

//------------------------------------------------------------------------------

void run()
{
	atomic_tests::run_mini();
	atomic_tests::run_full();
}

//------------------------------------------------------------------------------

}
