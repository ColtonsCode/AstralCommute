cmake_minimum_required(VERSION 3.12)

project(AstralCommuteClient)

set(BUILD_SHARED_LIBS False)
add_subdirectory(extlibs/SFML)

if(LINUX)
	include_directories(/usr/include/freetype2)
endif()

add_executable(${PROJECT_NAME} 
	src/client/Main.cpp
	src/client/Client.h
	src/client/Client.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE extlibs/SFML/include)

target_link_libraries(${PROJECT_NAME}
	sfml-graphics
	sfml-system
	sfml-window
	sfml-network
)


# SERVER

project(AstralCommuteServer)

add_executable(${PROJECT_NAME} ${SRC_FILES}
	src/server/ServerMain.cpp
	src/server/Server.h
	src/server/Server.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE extlibs/SFML/include)

target_link_libraries(${PROJECT_NAME}
	sfml-network
)