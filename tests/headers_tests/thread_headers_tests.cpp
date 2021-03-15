#include "tests/headers_tests/thread_headers_tests.hpp"

#include "tests/thread/thread_mini.hpp"
#include "tests/thread/thread_full.hpp"

#include "tests/mutex/mutex_mini.hpp"
#include "tests/mutex/mutex_full.hpp"

#include "tests/shared_mutex/shared_mutex_mini.hpp"
#include "tests/shared_mutex/shared_mutex_full.hpp"

#include "tests/future/future_mini.hpp"
#include "tests/future/future_full.hpp"

#include "tests/condition_variable/condition_variable_mini.hpp"
#include "tests/condition_variable/condition_variable_full.hpp"

//------------------------------------------------------------------------------

namespace thread_headers_tests {

//------------------------------------------------------------------------------

void run()
{
	thread_tests::run_mini();
	thread_tests::run_full();

	mutex_tests::run_mini();
	mutex_tests::run_full();

	shared_mutex_tests::run_mini();
	shared_mutex_tests::run_full();

	future_tests::run_mini();
	future_tests::run_full();

	condition_variable_tests::run_mini();
	condition_variable_tests::run_full();
}

//------------------------------------------------------------------------------

}
