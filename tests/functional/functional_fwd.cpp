#include "tests/functional/functional_fwd.hpp"

#include <functional>

//------------------------------------------------------------------------------

namespace functional_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_FUNCTION
std::function< void () > TestClass::getFunction()
{
	return std::function< void () >();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_REFERENCE_WRAPPER
std::reference_wrapper< int > TestClass::getReferenceWrapper()
{
	static int a = 42;
	std::reference_wrapper<int> ref = a;
	return ref;
}
#endif

//------------------------------------------------------------------------------

std::equal_to<int> TestClass::getEqualTo()
{
	return std::equal_to<int>();
}

//------------------------------------------------------------------------------

std::not_equal_to<int> TestClass::getNotEqualTo()
{
	return std::not_equal_to<int>();
}

//------------------------------------------------------------------------------

std::greater<int> TestClass::getGreater()
{
	return std::greater<int>();
}

//------------------------------------------------------------------------------

std::less<int> TestClass::getLess()
{
	return std::less<int>();
}

//------------------------------------------------------------------------------

std::greater_equal<int> TestClass::getGreaterEqual()
{
	return std::greater_equal<int>();
}

//------------------------------------------------------------------------------

std::less_equal<int> TestClass::getLessEqual()
{
	return std::less_equal<int>();
}

//------------------------------------------------------------------------------

std::plus<int> TestClass::getPlus()
{
	return std::plus<int>();
}

//------------------------------------------------------------------------------

std::minus<int> TestClass::getMinus()
{
	return std::minus<int>();
}

//------------------------------------------------------------------------------

std::multiplies<int> TestClass::getMultiplies()
{
	return std::multiplies<int>();
}

//------------------------------------------------------------------------------

std::divides<int> TestClass::getDivides()
{
	return std::divides<int>();
}

//------------------------------------------------------------------------------

std::modulus<int> TestClass::getModulus()
{
	return std::modulus<int>();
}

//------------------------------------------------------------------------------

std::negate<int> TestClass::getNegate()
{
	return std::negate<int>();
}

//------------------------------------------------------------------------------

std::logical_and<int> TestClass::getLogicalAnd()
{
	return std::logical_and<int>();
}

//------------------------------------------------------------------------------

std::logical_or<int> TestClass::getLogicalOr()
{
	return std::logical_or<int>();
}

//------------------------------------------------------------------------------

std::logical_not<int> TestClass::getLogicalNot()
{
	return std::logical_not<int>();
}

//------------------------------------------------------------------------------

std::bit_and<int> TestClass::getBitAnd()
{
	return std::bit_and<int>();
}

//------------------------------------------------------------------------------

std::bit_or<int> TestClass::getBitOr()
{
	return std::bit_or<int>();
}

//------------------------------------------------------------------------------

std::bit_xor<int> TestClass::getBitXor()
{
	return std::bit_xor<int>();
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_BIT_NOT
std::bit_not<int> TestClass::getBitNot()
{
	return std::bit_not<int>();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_IS_BIND_EXPRESSION
std::is_bind_expression< TestClass > TestClass::getIsBindExpression()
{
	return std::is_bind_expression< TestClass >();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_IS_PLACEHOLDER
std::is_placeholder< TestClass > TestClass::getIsPlaceholder()
{
	return std::is_placeholder< TestClass >();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_BAD_FUNCTION_CALL
std::bad_function_call TestClass::getBadFunctionCall()
{
	return std::bad_function_call();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_HASH
std::hash<int> TestClass::getHash()
{
	return std::hash<int>();
}
#endif

//------------------------------------------------------------------------------

}
