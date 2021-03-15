#include "tests/headers_tests/container_headers_tests.hpp"

#include "tests/array/array_mini.hpp"
#include "tests/array/array_full.hpp"

#include "tests/vector/vector_mini.hpp"
#include "tests/vector/vector_full.hpp"

#include "tests/deque/deque_mini.hpp"
#include "tests/deque/deque_full.hpp"

#include "tests/list/list_mini.hpp"
#include "tests/list/list_full.hpp"

#include "tests/forward_list/forward_list_mini.hpp"
#include "tests/forward_list/forward_list_full.hpp"

#include "tests/set/set_mini.hpp"
#include "tests/set/set_full.hpp"

#include "tests/map/map_mini.hpp"
#include "tests/map/map_full.hpp"

#include "tests/unordered_set/unordered_set_mini.hpp"
#include "tests/unordered_set/unordered_set_full.hpp"

#include "tests/unordered_map/unordered_map_mini.hpp"
#include "tests/unordered_map/unordered_map_full.hpp"

#include "tests/queue/queue_mini.hpp"
#include "tests/queue/queue_full.hpp"

#include "tests/stack/stack_mini.hpp"
#include "tests/stack/stack_full.hpp"

//------------------------------------------------------------------------------

namespace container_headers_tests {

//------------------------------------------------------------------------------

void run()
{
	array_tests::run_mini();
	array_tests::run_full();

	vector_tests::run_mini();
	vector_tests::run_full();

	deque_tests::run_mini();
	deque_tests::run_full();

	list_tests::run_mini();
	list_tests::run_full();

	forward_list_tests::run_mini();
	forward_list_tests::run_full();

	set_tests::run_mini();
	set_tests::run_full();

	map_tests::run_mini();
	map_tests::run_full();

	unordered_set_tests::run_mini();
	unordered_set_tests::run_full();

	queue_tests::run_mini();
	queue_tests::run_full();

	stack_tests::run_mini();
	stack_tests::run_full();
}

//------------------------------------------------------------------------------

}
