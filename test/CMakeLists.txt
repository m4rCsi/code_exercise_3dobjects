include_directories(../src)
add_executable(Test 
				main.cpp 
				Cone.cpp
				Cuboid.cpp
				Color.cpp)
target_link_libraries(Test XPI)