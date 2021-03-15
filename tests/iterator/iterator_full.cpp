#include "tests/iterator/iterator_full.hpp"

#include "tests/iterator/iterator_fwd.hpp"

#include <iterator>

//------------------------------------------------------------------------------

namespace iterator_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	std::iterator_traits< TestClass::Iterator > iterator_traits =
		testObj.getIteratorTraits();
	(void)iterator_traits;

	#ifdef STDFWD_IS_ITERATOR_TRAITS
	std::iterator< std::input_iterator_tag, int > iterator = testObj.getIterator();
	(void)iterator;
	#endif

	std::reverse_iterator< TestClass::Iterator > reverse_iterator =
		testObj.getReverseIterator();
	(void)reverse_iterator;

	#ifdef STDFWD_IS_MOVE_ITERATOR
	std::move_iterator< TestClass::Iterator > move_iterator =
		testObj.getMoveIterator();
	(void)move_iterator;
	#endif

	std::back_insert_iterator< TestClass::Container > back_insert_iterator =
		testObj.getBackInsertIterator();
	(void)back_insert_iterator;

	std::front_insert_iterator< TestClass::Container > front_insert_iterator =
		testObj.getFrontInsertIterator();
	(void)front_insert_iterator;

	std::insert_iterator< TestClass::Container > insert_iterator =
		testObj.getInsertIterator();
	(void)insert_iterator;

	std::istream_iterator< char > istream_iterator = testObj.getIstreamIterator();
	(void)istream_iterator;

	std::ostream_iterator< char > ostream_iterator = testObj.getOstreamIterator();
	(void)ostream_iterator;

	std::istreambuf_iterator< char > istreambuf_iterator =
		testObj.getIstreambufIterator();
	(void)istreambuf_iterator;

	std::ostreambuf_iterator< char > ostreambuf_iterator =
		testObj.getOstreambufIterator();
	(void)ostreambuf_iterator;

	std::input_iterator_tag input_iterator_tag = testObj.getInputIteratorTag();
	(void)input_iterator_tag;

	std::output_iterator_tag output_iterator_tag = testObj.getOutputIteratorTag();
	(void)output_iterator_tag;

	std::forward_iterator_tag forward_iterator_tag = testObj.getForwardIteratorTag();
	(void)forward_iterator_tag;

	std::bidirectional_iterator_tag bidirectional_iterator_tag =
		testObj.getBidirectionalIteratorTag();
	(void)bidirectional_iterator_tag;

	std::random_access_iterator_tag random_access_iterator_tag =
		testObj.getRandomAccessIteratorTag();
	(void)random_access_iterator_tag;

	#ifdef STDFWD_IS_CONTIGUOUS_ITERATOR_TAG
	std::contiguous_iterator_tag contiguous_iterator_tag =
		testObj.getContiguousIteratorTag();
	(void)contiguous_iterator_tag;
	#endif
}

//------------------------------------------------------------------------------

}
