#include "tests/queue/queue_full.hpp"

#include "tests/queue/queue_fwd.hpp"

#include <queue>

//------------------------------------------------------------------------------

namespace queue_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	auto queue = testObj.getQueue();
	(void)queue;

	auto priorityQueue = testObj.getPriorityQueue();
	(void)priorityQueue;
}

//------------------------------------------------------------------------------

}
