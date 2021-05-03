#include "tests/headers_tests/utility_headers_tests.hpp"

#include "tests/typeinfo/typeinfo_mini.hpp"
#include "tests/typeinfo/typeinfo_full.hpp"

#include "tests/type_traits/type_traits_mini.hpp"
#include "tests/type_traits/type_traits_full.hpp"

#include "tests/utility/utility_full.hpp"
#include "tests/utility/utility_mini.hpp"

#include "tests/bitset/bitset_mini.hpp"
#include "tests/bitset/bitset_full.hpp"

#include "tests/functional/functional_mini.hpp"
#include "tests/functional/functional_full.hpp"

#include "tests/chrono/chrono_mini.hpp"
#include "tests/chrono/chrono_full.hpp"

#include "tests/initializer_list/initializer_list_mini.hpp"
#include "tests/initializer_list/initializer_list_full.hpp"

#include "tests/tuple/tuple_mini.hpp"
#include "tests/tuple/tuple_full.hpp"

#include "tests/optional/optional_mini.hpp"
#include "tests/optional/optional_full.hpp"

#include "tests/any/any_mini.hpp"
#include "tests/any/any_full.hpp"

#include "tests/valarray/valarray_mini.hpp"
#include "tests/valarray/valarray_full.hpp"

//------------------------------------------------------------------------------

namespace utility_headers_tests {

//------------------------------------------------------------------------------

void run()
{
	typeinfo_tests::run_mini();
	typeinfo_tests::run_full();

	type_traits_tests::run_mini();
	type_traits_tests::run_full();

	utility_tests::run_full();
	utility_tests::run_mini();

	bitset_tests::run_mini();
	bitset_tests::run_full();

	functional_tests::run_mini();
	functional_tests::run_full();

	chrono_tests::run_mini();
	chrono_tests::run_full();

	initializer_list_tests::run_mini();
	initializer_list_tests::run_full();

	tuple_tests::run_mini();
	tuple_tests::run_full();

	optional_tests::run_mini();
	optional_tests::run_full();

	any_tests::run_mini();
	any_tests::run_full();

	valarray_tests::run_mini();
	valarray_tests::run_full();
}

//------------------------------------------------------------------------------

}
