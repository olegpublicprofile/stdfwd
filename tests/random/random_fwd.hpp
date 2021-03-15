#pragma once

#include <stdfwd/random>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP11
	#define STDFWD_IS_LINEAR_CONGRUENTIAL_ENGINE
	#define STDFWD_IS_MERSENNE_TWISTER_ENGINE
	#define STDFWD_IS_SUBTRACT_WITH_CARRY_ENGINE
	#define STDFWD_IS_DISCARD_BLOCK_ENGINE
	#define STDFWD_IS_INDEPENDENT_BITS_ENGINE
	#define STDFWD_IS_SHUFFLE_ORDER_ENGINE
	#define STDFWD_IS_MINSTD_RAND0
	#define STDFWD_IS_MINSTD_RAND
	#define STDFWD_IS_MT19937
	#define STDFWD_IS_MT19937_64
	#define STDFWD_IS_RANLUX24_BASE
	#define STDFWD_IS_RANLUX48_BASE
	#define STDFWD_IS_RANLUX24
	#define STDFWD_IS_RANLUX48
	#define STDFWD_IS_KNUTH_B
	#define STDFWD_IS_DEFAULT_RANDOM_ENGINE
	#define STDFWD_IS_RANDOM_DEVICE
	#define STDFWD_IS_SEED_SEQ
	#define STDFWD_IS_BERNOULLI_DISTRIBUTION
	#define STDFWD_IS_UNIFORM_INT_DISTRIBUTION
	#define STDFWD_IS_BINOMIAL_DISTRIBUTION
	#define STDFWD_IS_GEOMETRIC_DISTRIBUTION
	#define STDFWD_IS_DISCRETE_DISTRIBUTION
	#define STDFWD_IS_NEGATIVE_BINOMIAL_DISTRIBUTION
	#define STDFWD_IS_POISSON_DISTRIBUTION
	#define STDFWD_IS_UNIFORM_REAL_DISTRIBUTION
	#define STDFWD_IS_EXPONENTIAL_DISTRIBUTION
	#define STDFWD_IS_GAMMA_DISTRIBUTION
	#define STDFWD_IS_WEIBULL_DISTRIBUTION
#endif

//------------------------------------------------------------------------------

namespace random_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	#ifdef STDFWD_IS_LINEAR_CONGRUENTIAL_ENGINE
	using linear_congruential_engine = std::linear_congruential_engine<
		std::uint_fast32_t, 16807, 0, 2147483647
	>;
	#endif

	#ifdef STDFWD_IS_MERSENNE_TWISTER_ENGINE
	using mersenne_twister_engine = std::mersenne_twister_engine<
		std::uint_fast32_t, 32, 624, 397, 31,
		0x9908b0df, 11,
		0xffffffff, 7,
		0x9d2c5680, 15,
		0xefc60000, 18, 1812433253
	>;
	#endif

	#ifdef STDFWD_IS_SUBTRACT_WITH_CARRY_ENGINE
	using subtract_with_carry_engine = std::subtract_with_carry_engine<
		std::uint_fast32_t, 24, 10, 24
	>;
	#endif
	#ifdef STDFWD_IS_DISCARD_BLOCK_ENGINE
	using discard_block_engine = std::discard_block_engine<
		std::ranlux24_base, 223, 23
	>;
	#endif
	#ifdef STDFWD_IS_INDEPENDENT_BITS_ENGINE
	using independent_bits_engine = std::independent_bits_engine<
		std::ranlux24_base, 10, unsigned
	>;
	#endif
	#ifdef STDFWD_IS_SHUFFLE_ORDER_ENGINE
	using shuffle_order_engine = std::shuffle_order_engine<
		std::minstd_rand0, 256
	>;
	#endif
	#ifdef STDFWD_IS_LINEAR_CONGRUENTIAL_ENGINE
	linear_congruential_engine getLinearCongruentialEngine();
	#endif
	#ifdef STDFWD_IS_MERSENNE_TWISTER_ENGINE
	mersenne_twister_engine getMersenneTwisterEngine();
	#endif
	#ifdef STDFWD_IS_SUBTRACT_WITH_CARRY_ENGINE
	subtract_with_carry_engine getSubtractWithCarryEngine();
	#endif
	#ifdef STDFWD_IS_DISCARD_BLOCK_ENGINE
	discard_block_engine getDiscardBlockEngine();
	#endif
	#ifdef STDFWD_IS_INDEPENDENT_BITS_ENGINE
	independent_bits_engine getIndependentBitsEngine();
	#endif
	#ifdef STDFWD_IS_SHUFFLE_ORDER_ENGINE
	shuffle_order_engine getShuffleOrderEngine();
	#endif
	#ifdef STDFWD_IS_MINSTD_RAND0
	std::minstd_rand0 getMinstdRand0();
	#endif
	#ifdef STDFWD_IS_MINSTD_RAND
	std::minstd_rand getMinstdRand();
	#endif
	#ifdef STDFWD_IS_MT19937
	std::mt19937 getMt19937();
	#endif
	#ifdef STDFWD_IS_MT19937_64
	std::mt19937_64 getMt1993764();
	#endif
	#ifdef STDFWD_IS_RANLUX24_BASE
	std::ranlux24_base getRanlux24Base();
	#endif
	#ifdef STDFWD_IS_RANLUX48_BASE
	std::ranlux48_base getRanlux48Base();
	#endif
	#ifdef STDFWD_IS_RANLUX24
	std::ranlux24 getRanlux24();
	#endif
	#ifdef STDFWD_IS_RANLUX48
	std::ranlux48 getRanlux48();
	#endif
	#ifdef STDFWD_IS_KNUTH_B
	std::knuth_b getKnuthB();
	#endif
	#ifdef STDFWD_IS_DEFAULT_RANDOM_ENGINE
	std::default_random_engine getDefaultRandomEngine();
	#endif

	#ifdef STDFWD_IS_RANDOM_DEVICE
	std::random_device & getRandomDevice();
	#endif
	#ifdef STDFWD_IS_SEED_SEQ
	std::seed_seq & getSeedSeq();
	#endif
	#ifdef STDFWD_IS_BERNOULLI_DISTRIBUTION
	std::bernoulli_distribution getBernoulliDistribution();
	#endif

	#ifdef STDFWD_IS_UNIFORM_INT_DISTRIBUTION
	stdfwd::uniform_int_distribution getUniformIntDistribution();
	#endif
	#ifdef STDFWD_IS_BINOMIAL_DISTRIBUTION
	stdfwd::binomial_distribution getBinomialDistribution();
	#endif
	#ifdef STDFWD_IS_GEOMETRIC_DISTRIBUTION
	stdfwd::geometric_distribution getGeometricDistribution();
	#endif
	#ifdef STDFWD_IS_DISCRETE_DISTRIBUTION
	stdfwd::discrete_distribution getDiscreteDistribution();
	#endif
	#ifdef STDFWD_IS_NEGATIVE_BINOMIAL_DISTRIBUTION
	stdfwd::negative_binomial_distribution getNegativeBinomialDistribution();
	#endif
	#ifdef STDFWD_IS_POISSON_DISTRIBUTION
	stdfwd::poisson_distribution getPoissonDistribution();
	#endif

	#ifdef STDFWD_IS_UNIFORM_REAL_DISTRIBUTION
	stdfwd::uniform_real_distribution getUniformRealDistribution();
	#endif
	#ifdef STDFWD_IS_EXPONENTIAL_DISTRIBUTION
	stdfwd::exponential_distribution getExponentialDistribution();
	#endif
	#ifdef STDFWD_IS_GAMMA_DISTRIBUTION
	stdfwd::gamma_distribution getGammaDistribution();
	#endif
	#ifdef STDFWD_IS_WEIBULL_DISTRIBUTION
	stdfwd::weibull_distribution getWeibullDistribution();
	#endif

};

//------------------------------------------------------------------------------

}
