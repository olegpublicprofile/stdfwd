#include "tests/filesystem/filesystem_fwd.hpp"

#ifdef STDFWD_IS_FILESYSTEM
#include <filesystem>
#include <system_error>
#endif

//------------------------------------------------------------------------------

namespace filesystem_tests {

//------------------------------------------------------------------------------

int TestClass::getInt()
{
	return 42;
}

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_FILESYSTEM_PATH
std::filesystem::path TestClass::getPath()
{
	return std::filesystem::path();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_FILESYSTEM_ERROR
std::filesystem::filesystem_error TestClass::getFilesystemError()
{
	return std::filesystem::filesystem_error("", std::error_code());
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_DIRECTORY_ENTRY
std::filesystem::directory_entry TestClass::getDirectoryError()
{
	return std::filesystem::directory_entry();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_RECURSIVE_DIRECTORY_ITERATOR
std::filesystem::recursive_directory_iterator TestClass::getRecursiveDirectoryIterator()
{
	return std::filesystem::recursive_directory_iterator();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_FILE_STATUS
std::filesystem::file_status TestClass::getFileStatus()
{
	return std::filesystem::file_status();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_SPACE_INFO
std::filesystem::space_info TestClass::getSpaceInfo()
{
	return std::filesystem::space_info();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_FILE_TYPE
std::filesystem::file_type TestClass::getFileType()
{
	return std::filesystem::file_type();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_FILESYSTEM_PERMS
std::filesystem::perms TestClass::getPerms()
{
	return std::filesystem::perms();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_FILESYSTEM_PERMS_OPTIONS
std::filesystem::perm_options TestClass::getPermOptions()
{
	return std::filesystem::perm_options();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_FILESYSTEM_COPY_OPTIONS
std::filesystem::copy_options TestClass::getCopyOptions()
{
	return std::filesystem::copy_options();
}
#endif

//------------------------------------------------------------------------------

#ifdef STDFWD_IS_FILESYSTEM_DIRECTORY_OPTIONS
std::filesystem::directory_options TestClass::getDirectoryOptions()
{
	return std::filesystem::directory_options();
}
#endif

//------------------------------------------------------------------------------

}
