#pragma once

#include <stdfwd/filesystem>

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_CPP17
	#ifdef __has_include
		#if __has_include(<filesystem>)
			#define STDFWD_IS_FILESYSTEM
		#endif
	#else
		#define STDFWD_IS_FILESYSTEM
	#endif
#endif

#ifdef STDFWD_IS_FILESYSTEM
	#define STDFWD_IS_FILESYSTEM_PATH
	#define STDFWD_IS_FILESYSTEM_ERROR
	#define STDFWD_IS_DIRECTORY_ENTRY
	#define STDFWD_IS_DIRECTORY_ITERATOR
	#define STDFWD_IS_RECURSIVE_DIRECTORY_ITERATOR
	#define STDFWD_IS_FILE_STATUS
	#define STDFWD_IS_SPACE_INFO
	#define STDFWD_IS_FILE_TYPE
	#define STDFWD_IS_FILESYSTEM_PERMS
	#define STDFWD_IS_FILESYSTEM_PERMS_OPTIONS
	#define STDFWD_IS_FILESYSTEM_COPY_OPTIONS
	#define STDFWD_IS_FILESYSTEM_DIRECTORY_OPTIONS
#endif

//------------------------------------------------------------------------------

namespace filesystem_tests {

//------------------------------------------------------------------------------

class TestClass
{
public:

	int getInt();

	#ifdef STDFWD_IS_FILESYSTEM_PATH
	std::filesystem::path getPath();
	#endif

	#ifdef STDFWD_IS_FILESYSTEM_ERROR
	std::filesystem::filesystem_error getFilesystemError();
	#endif

	#ifdef STDFWD_IS_DIRECTORY_ENTRY
	std::filesystem::directory_entry getDirectoryError();
	#endif

	#ifdef STDFWD_IS_RECURSIVE_DIRECTORY_ITERATOR
	std::filesystem::recursive_directory_iterator getRecursiveDirectoryIterator();
	#endif

	#ifdef STDFWD_IS_FILE_STATUS
	std::filesystem::file_status getFileStatus();
	#endif

	#ifdef STDFWD_IS_SPACE_INFO
	std::filesystem::space_info getSpaceInfo();
	#endif

	#ifdef STDFWD_IS_FILE_TYPE
	std::filesystem::file_type getFileType();
	#endif

	#ifdef STDFWD_IS_FILESYSTEM_PERMS
	std::filesystem::perms getPerms();
	#endif

	#ifdef STDFWD_IS_FILESYSTEM_PERMS_OPTIONS
	std::filesystem::perm_options getPermOptions();
	#endif

	#ifdef STDFWD_IS_FILESYSTEM_COPY_OPTIONS
	std::filesystem::copy_options getCopyOptions();
	#endif

	#ifdef STDFWD_IS_FILESYSTEM_DIRECTORY_OPTIONS
	std::filesystem::directory_options getDirectoryOptions();
	#endif

};

//------------------------------------------------------------------------------

}
