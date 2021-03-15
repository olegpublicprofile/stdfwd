#include "tests/random/random_fwd.hpp"

#include <random>

//------------------------------------------------------------------------------

namespace random_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_LINEAR_CONGRUENTIAL_ENGINE
TestClass::linear_congruential_engine TestClass::getLinearCongruentialEngine()
{
	return linear_congruential_engine();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_MERSENNE_TWISTER_ENGINE
TestClass::mersenne_twister_engine TestClass::getMersenneTwisterEngine()
{
	return mersenne_twister_engine();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_SUBTRACT_WITH_CARRY_ENGINE
TestClass::subtract_with_carry_engine TestClass::getSubtractWithCarryEngine()
{
	return subtract_with_carry_engine();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_DISCARD_BLOCK_ENGINE
TestClass::discard_block_engine TestClass::getDiscardBlockEngine()
{
	return discard_block_engine();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_INDEPENDENT_BITS_ENGINE
TestClass::independent_bits_engine TestClass::getIndependentBitsEngine()
{
	return independent_bits_engine();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_SHUFFLE_ORDER_ENGINE
TestClass::shuffle_order_engine TestClass::getShuffleOrderEngine()
{
	return shuffle_order_engine();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_MINSTD_RAND0
std::minstd_rand0 TestClass::getMinstdRand0()
{
	return std::minstd_rand0();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_MINSTD_RAND
std::minstd_rand TestClass::getMinstdRand()
{
	return std::minstd_rand();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_MT19937
std::mt19937 TestClass::getMt19937()
{
	return std::mt19937();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_MT19937_64
std::mt19937_64 TestClass::getMt1993764()
{
	return std::mt19937_64();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_RANLUX24_BASE
std::ranlux24_base TestClass::getRanlux24Base()
{
	return std::ranlux24_base();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_RANLUX48_BASE
std::ranlux48_base TestClass::getRanlux48Base()
{
	return std::ranlux48_base();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_RANLUX24
std::ranlux24 TestClass::getRanlux24()
{
	return std::ranlux24();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_RANLUX48
std::ranlux48 TestClass::getRanlux48()
{
	return std::ranlux48();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_KNUTH_B
std::knuth_b TestClass::getKnuthB()
{
	return std::knuth_b();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_DEFAULT_RANDOM_ENGINE
std::default_random_engine TestClass::getDefaultRandomEngine()
{
	return std::default_random_engine();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_RANDOM_DEVICE
std::random_device & TestClass::getRandomDevice()
{
	static std::random_device d;
	return d;
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_SEED_SEQ
std::seed_seq & TestClass::getSeedSeq()
{
	static std::seed_seq s;
	return s;
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_BERNOULLI_DISTRIBUTION
std::bernoulli_distribution TestClass::getBernoulliDistribution()
{
	return std::bernoulli_distribution();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_UNIFORM_INT_DISTRIBUTION
stdfwd::uniform_int_distribution TestClass::getUniformIntDistribution()
{
	return stdfwd::uniform_int_distribution();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_BINOMIAL_DISTRIBUTION
stdfwd::binomial_distribution TestClass::getBinomialDistribution()
{
	return stdfwd::binomial_distribution();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_GEOMETRIC_DISTRIBUTION
stdfwd::geometric_distribution TestClass::getGeometricDistribution()
{
	return stdfwd::geometric_distribution();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_DISCRETE_DISTRIBUTION
stdfwd::discrete_distribution TestClass::getDiscreteDistribution()
{
	return stdfwd::discrete_distribution();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_NEGATIVE_BINOMIAL_DISTRIBUTION
stdfwd::negative_binomial_distribution TestClass::getNegativeBinomialDistribution()
{
	return stdfwd::negative_binomial_distribution();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_POISSON_DISTRIBUTION
stdfwd::poisson_distribution TestClass::getPoissonDistribution()
{
	return stdfwd::poisson_distribution();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_UNIFORM_REAL_DISTRIBUTION
stdfwd::uniform_real_distribution TestClass::getUniformRealDistribution()
{
	return stdfwd::uniform_real_distribution();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_EXPONENTIAL_DISTRIBUTION
stdfwd::exponential_distribution TestClass::getExponentialDistribution()
{
	return stdfwd::exponential_distribution();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_GAMMA_DISTRIBUTION
stdfwd::gamma_distribution TestClass::getGammaDistribution()
{
	return stdfwd::gamma_distribution();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_WEIBULL_DISTRIBUTION
stdfwd::weibull_distribution TestClass::getWeibullDistribution()
{
	return stdfwd::weibull_distribution();
}
#endif

//------------------------------------------------------------------------------

}

//------------------------------------------------------------------------------


