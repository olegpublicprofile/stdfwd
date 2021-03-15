#pragma once

#include <stdfwd/stdexcept>

//------------------------------------------------------------------------------

namespace stdexcept_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	std::logic_error getLogicError();
	std::domain_error getDomainError();
	std::invalid_argument getInvalidArgument();
	std::length_error getLengthError();
	std::out_of_range getOutOfRange();
	std::runtime_error getRuntimeError();
	std::range_error getRangeError();
	std::overflow_error getOverflowError();
	std::underflow_error getUnderflowError();

};

//------------------------------------------------------------------------------

}
