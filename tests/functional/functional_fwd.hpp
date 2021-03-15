#pragma once

#include <stdfwd/functional>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP11
	#define STDFWD_IS_FUNCTION
	#define STDFWD_IS_BAD_FUNCTION_CALL
	#define STDFWD_IS_IS_BIND_EXPRESSION
	#define STDFWD_IS_IS_PLACEHOLDER
	#define STDFWD_IS_REFERENCE_WRAPPER
	#define STDFWD_IS_HASH
#endif

#ifdef STDFWD_IS_CPP14
	#define STDFWD_IS_BIT_NOT
#endif

//------------------------------------------------------------------------------

namespace functional_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	static const bool value = true; // for is_bind_expression

	int getInt();

	#ifdef STDFWD_IS_FUNCTION
	std::function< void () > getFunction();
	#endif

	#ifdef STDFWD_IS_REFERENCE_WRAPPER
	std::reference_wrapper< int > getReferenceWrapper();
	#endif

	std::equal_to<int>		getEqualTo();
	std::not_equal_to<int>	getNotEqualTo();
	std::greater<int>		getGreater();
	std::less<int>			getLess();
	std::greater_equal<int> getGreaterEqual();
	std::less_equal<int>	getLessEqual();

	std::plus<int>			getPlus();
	std::minus<int>			getMinus();
	std::multiplies<int>	getMultiplies();
	std::divides<int>		getDivides();
	std::modulus<int>		getModulus();
	std::negate<int>		getNegate();

	std::logical_and<int>	getLogicalAnd();
	std::logical_or<int>	getLogicalOr();
	std::logical_not<int>	getLogicalNot();

	std::bit_and<int>		getBitAnd();
	std::bit_or<int>		getBitOr();
	std::bit_xor<int>		getBitXor();
	#ifdef STDFWD_IS_BIT_NOT
	std::bit_not<int>		getBitNot();
	#endif

	#ifdef STDFWD_IS_IS_BIND_EXPRESSION
	std::is_bind_expression< TestClass > getIsBindExpression();
	#endif

	#ifdef STDFWD_IS_IS_PLACEHOLDER
	std::is_placeholder< TestClass > getIsPlaceholder();
	#endif

	#ifdef STDFWD_IS_BAD_FUNCTION_CALL
	std::bad_function_call getBadFunctionCall();
	#endif

	#ifdef STDFWD_IS_HASH
	std::hash<int> getHash();
	#endif

};

//------------------------------------------------------------------------------

}
