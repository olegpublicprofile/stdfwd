#include "tests/headers_tests/numeric_headers_tests.hpp"

#include "tests/complex/complex_mini.hpp"
#include "tests/complex/complex_full.hpp"

#include "tests/valarray/valarray_mini.hpp"
#include "tests/valarray/valarray_full.hpp"

#include "tests/random/random_mini.hpp"
#include "tests/random/random_full.hpp"

#include "tests/ratio/ratio_mini.hpp"
#include "tests/ratio/ratio_full.hpp"

//------------------------------------------------------------------------------

namespace numeric_headers_tests {

//------------------------------------------------------------------------------

void run()
{
	complex_tests::run_mini();
	complex_tests::run_full();

	valarray_tests::run_mini();
	valarray_tests::run_full();

	random_tests::run_mini();
	random_tests::run_full();

	ratio_tests::run_mini();
	ratio_tests::run_full();
}

//------------------------------------------------------------------------------

}
