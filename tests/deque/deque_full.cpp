#include "tests/deque/deque_full.hpp"

#include "tests/deque/deque_fwd.hpp"

#include <deque>

//------------------------------------------------------------------------------

namespace deque_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	auto deque = testObj.getQeque();
	(void)deque;
}

//------------------------------------------------------------------------------

}
