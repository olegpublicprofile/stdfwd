#include "tests/bitset/bitset_full.hpp"

#include "tests/bitset/bitset_fwd.hpp"

#include <bitset>

//------------------------------------------------------------------------------

namespace bitset_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	std::bitset<8> bitset = testObj.getBitset();
	(void)bitset;

}

//------------------------------------------------------------------------------

}
