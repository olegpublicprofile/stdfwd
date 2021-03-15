#pragma once

#include <stdfwd/queue>

#include <vector>

//------------------------------------------------------------------------------

namespace queue_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	stdfwd::queue< int > getQueue();
	stdfwd::priority_queue< int > getPriorityQueue();
};

//------------------------------------------------------------------------------

}
