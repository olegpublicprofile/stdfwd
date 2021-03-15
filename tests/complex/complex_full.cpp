#include "tests/complex/complex_full.hpp"

#include "tests/complex/complex_fwd.hpp"

#include <complex>

//------------------------------------------------------------------------------

namespace complex_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;
	int i = testObj.getInt();
	(void)i;

	std::complex< int > complex = testObj.getComplex();
	(void)complex;
}

//------------------------------------------------------------------------------

}
