#include "tests/functional/functional_full.hpp"

#include "tests/functional/functional_fwd.hpp"

#include <functional>

//------------------------------------------------------------------------------

namespace functional_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_FUNCTION
	std::function< void () > function = testObj.getFunction();
	(void)function;
	#endif

	#ifdef STDFWD_IS_REFERENCE_WRAPPER
	std::reference_wrapper< int > reference_wrapper = testObj.getReferenceWrapper();
	(void)reference_wrapper;
	#endif

	std::equal_to<int> equal_to = testObj.getEqualTo();
	(void) equal_to;

	std::not_equal_to<int> not_equal_to = testObj.getNotEqualTo();
	(void) not_equal_to;

	std::greater<int> greater = testObj.getGreater();
	(void) greater;

	std::less<int> less = testObj.getLess();
	(void) less;

	std::greater_equal<int> greater_equal = testObj.getGreaterEqual();
	(void) greater_equal;

	std::less_equal<int> less_equal = testObj.getLessEqual();
	(void) less_equal;

	std::plus<int> plus = testObj.getPlus();
	(void) plus;

	std::minus<int> minus = testObj.getMinus();
	(void) minus;

	std::multiplies<int> multiplies = testObj.getMultiplies();
	(void) multiplies;

	std::divides<int> divides = testObj.getDivides();
	(void) divides;

	std::modulus<int> modulus = testObj.getModulus();
	(void) modulus;

	std::negate<int> negate = testObj.getNegate();
	(void) negate;

	std::logical_and<int> logical_and = testObj.getLogicalAnd();
	(void) logical_and;

	std::logical_or<int> logical_or = testObj.getLogicalOr();
	(void) logical_or;

	std::logical_not<int> logical_not = testObj.getLogicalNot();
	(void) logical_not;

	std::bit_and<int> bit_and = testObj.getBitAnd();
	(void) bit_and;

	std::bit_or<int> bit_or = testObj.getBitOr();
	(void) bit_or;

	std::bit_xor<int> bit_xor = testObj.getBitXor();
	(void) bit_xor;

	#ifdef STDFWD_IS_BIT_NOT
	std::bit_not<int> bit_not = testObj.getBitNot();
	(void) bit_not;
	#endif

	#ifdef STDFWD_IS_IS_BIND_EXPRESSION
	std::is_bind_expression< TestClass > is_bind_expression = testObj.getIsBindExpression();
	(void)is_bind_expression;
	#endif

	#ifdef STDFWD_IS_IS_PLACEHOLDER
	std::is_placeholder< TestClass > is_placeholder = testObj.getIsPlaceholder();
	(void)is_placeholder;
	#endif

	#ifdef STDFWD_IS_BAD_FUNCTION_CALL
	std::bad_function_call bad_function_call = testObj.getBadFunctionCall();
	(void)bad_function_call;
	#endif

	#ifdef STDFWD_IS_HASH
	std::hash<int> hash = testObj.getHash();
	(void)hash;
	#endif
}

//------------------------------------------------------------------------------

}
