#include "tests/random/random_full.hpp"

#include "tests/random/random_fwd.hpp"

#include <random>

//------------------------------------------------------------------------------

namespace random_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_LINEAR_CONGRUENTIAL_ENGINE
	auto linear_congruential_engine = testObj.getLinearCongruentialEngine();
	(void)linear_congruential_engine;
	#endif

	#ifdef STDFWD_IS_MERSENNE_TWISTER_ENGINE
	auto mersenne_twister_engine = testObj.getMersenneTwisterEngine();
	(void)mersenne_twister_engine;
	#endif

	#ifdef STDFWD_IS_SUBTRACT_WITH_CARRY_ENGINE
	auto subtract_with_carry_engine = testObj.getSubtractWithCarryEngine();
	(void)subtract_with_carry_engine;
	#endif

	#ifdef STDFWD_IS_DISCARD_BLOCK_ENGINE
	auto discard_block_engine = testObj.getDiscardBlockEngine();
	(void)discard_block_engine;
	#endif

	#ifdef STDFWD_IS_INDEPENDENT_BITS_ENGINE
	auto independent_bits_engine = testObj.getIndependentBitsEngine();
	(void)independent_bits_engine;
	#endif

	#ifdef STDFWD_IS_SHUFFLE_ORDER_ENGINE
	auto shuffle_order_engine = testObj.getShuffleOrderEngine();
	(void)shuffle_order_engine;
	#endif

	#ifdef STDFWD_IS_MINSTD_RAND0
	auto minstd_rand0 = testObj.getMinstdRand0();
	(void)minstd_rand0;
	#endif

	#ifdef STDFWD_IS_MINSTD_RAND
	auto minstd_rand = testObj.getMinstdRand();
	(void)minstd_rand;
	#endif

	#ifdef STDFWD_IS_MT19937
	auto mt19937 = testObj.getMt19937();
	(void)mt19937;
	#endif

	#ifdef STDFWD_IS_MT19937_64
	auto mt19937_64 = testObj.getMt1993764();
	(void)mt19937_64;
	#endif

	#ifdef STDFWD_IS_RANLUX24_BASE
	auto ranlux24_base = testObj.getRanlux24Base();
	(void)ranlux24_base;
	#endif

	#ifdef STDFWD_IS_RANLUX48_BASE
	auto ranlux48_base = testObj.getRanlux48Base();
	(void)ranlux48_base;
	#endif

	#ifdef STDFWD_IS_RANLUX24
	auto ranlux24 = testObj.getRanlux24();
	(void)ranlux24;
	#endif

	#ifdef STDFWD_IS_RANLUX48
	auto ranlux48 = testObj.getRanlux48();
	(void)ranlux48;
	#endif

	#ifdef STDFWD_IS_KNUTH_B
	auto knuth_b = testObj.getKnuthB();
	(void)knuth_b;
	#endif

	#ifdef STDFWD_IS_DEFAULT_RANDOM_ENGINE
	auto default_random_engine = testObj.getDefaultRandomEngine();
	(void)default_random_engine;
	#endif

	#ifdef STDFWD_IS_RANDOM_DEVICE
	auto & random_device = testObj.getRandomDevice();
	(void)random_device;
	#endif

	#ifdef STDFWD_IS_SEED_SEQ
	auto & seed_seq = testObj.getSeedSeq();
	(void)seed_seq;
	#endif

	#ifdef STDFWD_IS_BERNOULLI_DISTRIBUTION
	auto bernoulli_distribution = testObj.getBernoulliDistribution();
	(void)bernoulli_distribution;
	#endif

	#ifdef STDFWD_IS_UNIFORM_INT_DISTRIBUTION
	auto uniform_int_distribution = testObj.getUniformIntDistribution();
	(void)uniform_int_distribution;
	#endif

	#ifdef STDFWD_IS_BINOMIAL_DISTRIBUTION
	auto binomial_distribution = testObj.getBinomialDistribution();
	(void)binomial_distribution;
	#endif

	#ifdef STDFWD_IS_GEOMETRIC_DISTRIBUTION
	auto geometric_distribution = testObj.getGeometricDistribution();
	(void)geometric_distribution;
	#endif

	#ifdef STDFWD_IS_DISCRETE_DISTRIBUTION
	auto discrete_distribution = testObj.getDiscreteDistribution();
	(void)discrete_distribution;
	#endif

	#ifdef STDFWD_IS_NEGATIVE_BINOMIAL_DISTRIBUTION
	auto negative_binomial_distribution = testObj.getNegativeBinomialDistribution();
	(void)negative_binomial_distribution;
	#endif

	#ifdef STDFWD_IS_POISSON_DISTRIBUTION
	auto poisson_distribution = testObj.getPoissonDistribution();
	(void)poisson_distribution;
	#endif

	#ifdef STDFWD_IS_UNIFORM_REAL_DISTRIBUTION
	auto uniform_real_distribution = testObj.getUniformRealDistribution();
	(void)uniform_real_distribution;
	#endif

	#ifdef STDFWD_IS_EXPONENTIAL_DISTRIBUTION
	auto exponential_distribution = testObj.getExponentialDistribution();
	(void)exponential_distribution;
	#endif

	#ifdef STDFWD_IS_GAMMA_DISTRIBUTION
	auto gamma_distribution = testObj.getGammaDistribution();
	(void)gamma_distribution;
	#endif

	#ifdef STDFWD_IS_WEIBULL_DISTRIBUTION
	auto weibull_distribution = testObj.getWeibullDistribution();
	(void)weibull_distribution;
	#endif

}

//------------------------------------------------------------------------------

}
