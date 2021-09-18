#pragma once

#include "../stdfwd_details.hpp"

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_LIBCPP
	#define STDFWD_BEGIN_NAMESPACE_FILESYSTEM   _LIBCPP_BEGIN_NAMESPACE_FILESYSTEM
	#define STDFWD_END_NAMESPACE_FILESYSTEM     _LIBCPP_END_NAMESPACE_FILESYSTEM
#else
	#define STDFWD_BEGIN_NAMESPACE_FILESYSTEM                                   \
	STDFWD_STD_BEGIN                                                            \
	namespace filesystem {                                                      \


	#define STDFWD_END_NAMESPACE_FILESYSTEM } STDFWD_STD_END
#endif

//------------------------------------------------------------------------------
