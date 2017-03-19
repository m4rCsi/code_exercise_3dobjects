include_directories(../src)
add_executable(UnitTest 
				main.cpp 
				Cone.cpp
				Cuboid.cpp
				Sphere.cpp
				Color.cpp
				ShapeFactory.cpp)

target_link_libraries(UnitTest 3dObjects)