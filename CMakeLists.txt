cmake_minimum_required(VERSION 3.12)

project(AstralCommuteClient)

set(BUILD_SHARED_LIBS False)
add_subdirectory(extlibs/SFML)

add_executable(${PROJECT_NAME} 
	src/client/Main.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE extlibs/SFML/include)

target_link_libraries(${PROJECT_NAME}
	sfml-graphics
	sfml-system
	sfml-window
)


# SERVER

project(AstralCommuteServer)

add_executable(${PROJECT_NAME} ${SRC_FILES}
	src/server/ServerMain.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE extlibs/SFML/include)

target_link_libraries(${PROJECT_NAME}
	sfml-network
)