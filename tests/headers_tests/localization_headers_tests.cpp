#include "tests/headers_tests/localization_headers_tests.hpp"

#include "tests/locale/locale_mini.hpp"
#include "tests/locale/locale_full.hpp"

#include "tests/clocale/clocale_mini.hpp"
#include "tests/clocale/clocale_full.hpp"

//------------------------------------------------------------------------------

namespace localization_headers_tests {

//------------------------------------------------------------------------------

void run()
{
	locale_tests::run_mini();
	locale_tests::run_full();

	clocale_tests::run_mini();
	clocale_tests::run_full();
}

//------------------------------------------------------------------------------

}
