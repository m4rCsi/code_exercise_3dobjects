include_directories(../src)
add_executable(Test 
				main.cpp 
				Cone.cpp
				Cuboid.cpp
				Sphere.cpp
				Color.cpp
				ShapeFactory.cpp)

target_link_libraries(Test XPI)