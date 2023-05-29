cmake_minimum_required(VERSION 3.12)

project(AstralCommute)

set(SRC_FILES 
	src/main.cpp
)

set(BUILD_SHARED_LIBS False)
add_subdirectory(extlibs/SFML)

add_executable(${PROJECT_NAME} ${SRC_FILES})

target_include_directories(${PROJECT_NAME} PRIVATE extlibs/SFML/include)

target_link_libraries(${PROJECT_NAME} sfml-graphics sfml-system sfml-window)