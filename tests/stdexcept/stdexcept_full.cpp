#include "tests/stdexcept/stdexcept_full.hpp"

#include "tests/stdexcept/stdexcept_fwd.hpp"

#include <stdexcept>

//------------------------------------------------------------------------------

namespace stdexcept_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	std::logic_error logic_error = testObj.getLogicError();
	(void)logic_error;

	std::domain_error domain_error = testObj.getDomainError();
	(void)domain_error;

	std::invalid_argument invalid_argument = testObj.getInvalidArgument();
	(void)invalid_argument;

	std::length_error length_error = testObj.getLengthError();
	(void)length_error;

	std::out_of_range out_of_range = testObj.getOutOfRange();
	(void)out_of_range;

	std::runtime_error runtime_error = testObj.getRuntimeError();
	(void)runtime_error;

	std::range_error range_error = testObj.getRangeError();
	(void)range_error;

	std::overflow_error overflow_error = testObj.getOverflowError();
	(void)overflow_error;

	std::underflow_error underflow_error = testObj.getUnderflowError();
	(void)underflow_error;
}

//------------------------------------------------------------------------------

}
