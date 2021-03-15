#include "tests/stdexcept/stdexcept_fwd.hpp"

#include <stdexcept>

//------------------------------------------------------------------------------

namespace stdexcept_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

std::logic_error TestClass::getLogicError()
{
	return std::logic_error("");
}

//------------------------------------------------------------------------------

std::domain_error TestClass::getDomainError()
{
	return std::domain_error("");
}

//------------------------------------------------------------------------------

std::invalid_argument TestClass::getInvalidArgument()
{
	return std::invalid_argument("");
}

//------------------------------------------------------------------------------

std::length_error TestClass::getLengthError()
{
	return std::length_error("");
}

//------------------------------------------------------------------------------

std::out_of_range TestClass::getOutOfRange()
{
	return std::out_of_range("");
}

//------------------------------------------------------------------------------

std::runtime_error TestClass::getRuntimeError()
{
	return std::runtime_error("");
}

//------------------------------------------------------------------------------

std::range_error TestClass::getRangeError()
{
	return std::range_error("");
}

//------------------------------------------------------------------------------

std::overflow_error TestClass::getOverflowError()
{
	return std::overflow_error("");
}

//------------------------------------------------------------------------------

std::underflow_error TestClass::getUnderflowError()
{
	return std::underflow_error("");
}

//------------------------------------------------------------------------------

}
