cmake_minimum_required(VERSION 3.8)
project(std-fwd)

####################################################################
# Library version
get_directory_property(hasParent PARENT_DIRECTORY)
if(NOT ${hasParent})

    add_library(std-fwd INTERFACE)
    target_include_directories(std-fwd INTERFACE "include/")

####################################################################
# Standalone version (for testing)
else()

	set(CMAKE_CXX_STANDARD 11)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)

    file(GLOB_RECURSE SOURCES "tests/*.*" "include/*")

    add_executable(${PROJECT_NAME} ${SOURCES})
	target_include_directories(${PROJECT_NAME} PUBLIC "include/" ".")

    if(MSVC)
        target_compile_options(${PROJECT_NAME} PUBLIC
            /MP
            /FC
        )
    else()
        target_compile_options(${PROJECT_NAME} PUBLIC
            -Wall
        )
		if(CMAKE_COMPILER_IS_GNUCXX)
			target_link_libraries(${PROJECT_NAME} stdc++fs)
		endif()
    endif()

endif()

