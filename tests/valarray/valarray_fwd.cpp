#include "tests/valarray/valarray_fwd.hpp"

#include <valarray>
#include <random>

//------------------------------------------------------------------------------

namespace valarray_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

std::slice TestClass::getSlice()
{
	return std::slice();
}

//------------------------------------------------------------------------------

std::gslice TestClass::getGslice()
{
	return std::gslice();
}

//------------------------------------------------------------------------------

std::valarray<int> TestClass::getValarray()
{
	return std::valarray<int>();
}

//------------------------------------------------------------------------------

std::slice_array<int> TestClass::getSliceArray()
{
	static std::valarray<int> data;
	return data[std::slice(0, 0, 0)];
}

//------------------------------------------------------------------------------

std::gslice_array<int> TestClass::getGliceArray()
{
	static std::valarray<int> data;
	static std::gslice gslice;
	return data[gslice];
}

//------------------------------------------------------------------------------

std::mask_array<int> TestClass::getMaskArray()
{
	static std::valarray<int> data;
	return data[data>5];
}

//------------------------------------------------------------------------------

std::indirect_array<int> TestClass::getIndirectArray()
{
	static std::valarray<int> data;
	static std::valarray<std::size_t> idx = {0};
	return data[idx];
}

//------------------------------------------------------------------------------

}

//------------------------------------------------------------------------------
