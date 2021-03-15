#pragma once

#include <stdfwd/iterator>

#include <vector>
#include <string>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP11
	#define STDFWD_IS_MOVE_ITERATOR
#endif

#define STDFWD_IS_ITERATOR_TRAITS
#ifdef STDFWD_IS_CPP17
	#undef STDFWD_IS_ITERATOR_TRAITS
#endif

#ifdef STDFWD_IS_CPP20
	#define STDFWD_IS_CONTIGUOUS_ITERATOR_TAG
#endif

//------------------------------------------------------------------------------

namespace iterator_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	typedef std::vector< int > Container;
	typedef Container::iterator Iterator;

	std::iterator_traits< Iterator > getIteratorTraits();

	#ifdef STDFWD_IS_ITERATOR_TRAITS
	std::iterator< std::input_iterator_tag, int > getIterator();
	#endif

	std::reverse_iterator< Iterator > getReverseIterator();

	#ifdef STDFWD_IS_MOVE_ITERATOR
	std::move_iterator< Iterator > getMoveIterator();
	#endif

	std::back_insert_iterator< Container > getBackInsertIterator();
	std::front_insert_iterator< Container > getFrontInsertIterator();
	std::insert_iterator< Container > getInsertIterator();

	stdfwd::istream_iterator< char > getIstreamIterator();
	stdfwd::ostream_iterator< char > getOstreamIterator();

	stdfwd::istreambuf_iterator< char > getIstreambufIterator();
	stdfwd::ostreambuf_iterator< char > getOstreambufIterator();

	std::input_iterator_tag getInputIteratorTag();
	std::output_iterator_tag getOutputIteratorTag();
	std::forward_iterator_tag getForwardIteratorTag();
	std::bidirectional_iterator_tag getBidirectionalIteratorTag();
	std::random_access_iterator_tag getRandomAccessIteratorTag();

	#ifdef STDFWD_IS_CONTIGUOUS_ITERATOR_TAG
	std::contiguous_iterator_tag getContiguousIteratorTag();
	#endif

};

//------------------------------------------------------------------------------

}
