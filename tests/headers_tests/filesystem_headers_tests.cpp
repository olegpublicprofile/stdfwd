#include "tests/headers_tests/filesystem_headers_tests.hpp"

#include "tests/filesystem/filesystem_mini.hpp"
#include "tests/filesystem/filesystem_full.hpp"

//------------------------------------------------------------------------------

namespace filesystem_headers_tests {

//------------------------------------------------------------------------------

void run()
{
	filesystem_tests::run_mini();
	filesystem_tests::run_full();
}

//------------------------------------------------------------------------------

}
