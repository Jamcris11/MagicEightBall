cmake_minimum_required(VERSION 3.13)

project(MagicEightBall)

add_executable(magic8b src/main.cpp src/MagicEightBall.cpp)

target_include_directories(magic8b PUBLIC ${PROJECT_SOURCE_DIR}/includes)


install (TARGETS magic8b
	RUNTIME DESTINATION /usr/bin)
