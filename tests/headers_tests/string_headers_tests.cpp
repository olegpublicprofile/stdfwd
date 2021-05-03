#include "tests/headers_tests/string_headers_tests.hpp"

#include "tests/string/string_mini.hpp"
#include "tests/string/string_full.hpp"

#include "tests/string_view/string_view_mini.hpp"
#include "tests/string_view/string_view_full.hpp"

#include "tests/charconv/charconv_mini.hpp"
#include "tests/charconv/charconv_full.hpp"

//------------------------------------------------------------------------------

namespace string_headers_tests {

//------------------------------------------------------------------------------

void run()
{
	string_tests::run_mini();
	string_tests::run_full();

	string_view_tests::run_mini();
	string_view_tests::run_full();

	charconv_tests::run_mini();
	charconv_tests::run_full();
}

//------------------------------------------------------------------------------

}
