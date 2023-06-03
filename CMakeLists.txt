cmake_minimum_required(VERSION 3.25)

project(AstralCommute)


set(BUILD_SHARED_LIBS False)
add_subdirectory(extlibs/SFML)

set(TGUI_BACKEND SFML_GRAPHICS)
add_subdirectory(extlibs/TGUI)

if(LINUX)
	include_directories(/usr/include/freetype2)
endif()

add_executable(${PROJECT_NAME}Client 
	src/client/Main.cpp
	src/client/Client.h
	src/client/Client.cpp
)

target_include_directories(${PROJECT_NAME}Client PRIVATE extlibs/SFML/include)
target_include_directories(${PROJECT_NAME}Client PRIVATE extlibs/TGUI/include)

target_link_libraries(${PROJECT_NAME}Client
	sfml-graphics
	sfml-system
	sfml-window
	sfml-network
	tgui
)


# SERVER
add_executable(${PROJECT_NAME}Server ${SRC_FILES}
	src/server/ServerMain.cpp
	src/server/Server.h
	src/server/Server.cpp
)

target_include_directories(${PROJECT_NAME}Server PRIVATE extlibs/SFML/include)

target_link_libraries(${PROJECT_NAME}Server
	sfml-network
)