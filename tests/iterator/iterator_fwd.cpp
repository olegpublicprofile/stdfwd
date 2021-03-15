#include "tests/iterator/iterator_fwd.hpp"

#include <iostream>
#include <iterator>

//------------------------------------------------------------------------------

namespace iterator_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

std::iterator_traits< TestClass::Iterator > TestClass::getIteratorTraits()
{
	return std::iterator_traits< TestClass::Iterator >();
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_ITERATOR_TRAITS
std::iterator< std::input_iterator_tag, int > TestClass::getIterator()
{
	return std::iterator< std::input_iterator_tag, int >();
}
#endif

//------------------------------------------------------------------------------

std::reverse_iterator< TestClass::Iterator > TestClass::getReverseIterator()
{
	return std::reverse_iterator< TestClass::Iterator >();
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_MOVE_ITERATOR
std::move_iterator< TestClass::Iterator > TestClass::getMoveIterator()
{
	return std::move_iterator< TestClass::Iterator >();
}
#endif

//------------------------------------------------------------------------------

std::back_insert_iterator< TestClass::Container >
TestClass::getBackInsertIterator()
{
	static Container c;
	return std::back_insert_iterator< TestClass::Container >( c );
}

//------------------------------------------------------------------------------

std::front_insert_iterator< TestClass::Container > TestClass::getFrontInsertIterator()
{
	static Container c;
	return std::front_insert_iterator< TestClass::Container >( c );
}

//------------------------------------------------------------------------------

std::insert_iterator< TestClass::Container > TestClass::getInsertIterator()
{
	static Container c;
	return std::insert_iterator< TestClass::Container >( c, c.end() );
}

//------------------------------------------------------------------------------

stdfwd::istream_iterator< char > TestClass::getIstreamIterator()
{
	return std::istream_iterator< char >();
}

//------------------------------------------------------------------------------

stdfwd::ostream_iterator< char > TestClass::getOstreamIterator()
{
	return std::ostream_iterator< char >(std::cout, ", ");
}

//------------------------------------------------------------------------------

stdfwd::istreambuf_iterator< char > TestClass::getIstreambufIterator()
{
	return std::istreambuf_iterator< char >();
}

//------------------------------------------------------------------------------

stdfwd::ostreambuf_iterator< char > TestClass::getOstreambufIterator()
{
	return std::ostreambuf_iterator< char >(std::cout);
}

//------------------------------------------------------------------------------

std::input_iterator_tag TestClass::getInputIteratorTag()
{
	return std::input_iterator_tag();
}

//------------------------------------------------------------------------------

std::output_iterator_tag TestClass::getOutputIteratorTag()
{
	return std::output_iterator_tag();
}

//------------------------------------------------------------------------------

std::forward_iterator_tag TestClass::getForwardIteratorTag()
{
	return std::forward_iterator_tag();
}

//------------------------------------------------------------------------------

std::bidirectional_iterator_tag TestClass::getBidirectionalIteratorTag()
{
	return std::bidirectional_iterator_tag();
}

//------------------------------------------------------------------------------

std::random_access_iterator_tag TestClass::getRandomAccessIteratorTag()
{
	return std::random_access_iterator_tag();
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CONTIGUOUS_ITERATOR_TAG
std::contiguous_iterator_tag TestClass::getContiguousIteratorTag()
{
	return std::contiguous_iterator_tag();
}
#endif

//------------------------------------------------------------------------------

}

//------------------------------------------------------------------------------


