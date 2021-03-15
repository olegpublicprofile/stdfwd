#include "tests/filesystem/filesystem_full.hpp"

#include "tests/filesystem/filesystem_fwd.hpp"

#ifdef STDFWD_IS_FILESYSTEM
#include <filesystem>
#endif

//------------------------------------------------------------------------------

namespace filesystem_tests {

//------------------------------------------------------------------------------

void run_full()
{
	TestClass testObj;

	int i = testObj.getInt();
	(void)i;

	#ifdef STDFWD_IS_FILESYSTEM_PATH
	std::filesystem::path path = testObj.getPath();
	(void)path;
	#endif

	#ifdef STDFWD_IS_FILESYSTEM_PATH
	std::filesystem::filesystem_error filesystem_error = testObj.getFilesystemError();
	(void)filesystem_error;
	#endif

	#ifdef STDFWD_IS_DIRECTORY_ENTRY
	std::filesystem::directory_entry directory_entry = testObj.getDirectoryError();
	(void)directory_entry;
	#endif

	#ifdef STDFWD_IS_RECURSIVE_DIRECTORY_ITERATOR
	std::filesystem::recursive_directory_iterator recursive_directory_iterator =
		testObj.getRecursiveDirectoryIterator();
	(void)recursive_directory_iterator;
	#endif

	#ifdef STDFWD_IS_FILE_STATUS
	std::filesystem::file_status file_status = testObj.getFileStatus();
	(void)file_status;
	#endif

	#ifdef STDFWD_IS_SPACE_INFO
	std::filesystem::space_info space_info = testObj.getSpaceInfo();
	(void)space_info;
	#endif

	#ifdef STDFWD_IS_FILE_TYPE
	std::filesystem::file_type file_type = testObj.getFileType();
	(void)file_type;
	#endif

	#ifdef STDFWD_IS_FILESYSTEM_PERMS
	std::filesystem::perms perms = testObj.getPerms();
	(void)perms;
	#endif

	#ifdef STDFWD_IS_FILESYSTEM_PERMS_OPTIONS
	std::filesystem::perm_options perm_options = testObj.getPermOptions();
	(void)perm_options;
	#endif

	#ifdef STDFWD_IS_FILESYSTEM_COPY_OPTIONS
	std::filesystem::copy_options copy_options = testObj.getCopyOptions();
	(void)copy_options;
	#endif

	#ifdef STDFWD_IS_FILESYSTEM_DIRECTORY_OPTIONS
	std::filesystem::directory_options directory_options =
		testObj.getDirectoryOptions();
	(void)directory_options;
	#endif

}

//------------------------------------------------------------------------------

}
