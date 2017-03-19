Requirements
============
Cmake

Building
========

```
	mkdir build
	cmake ../
	make
	test/Test
```

```
in build/ on master 
› cmake ../
-- The C compiler identification is GNU 6.3.1
-- The CXX compiler identification is GNU 6.3.1
-- Check for working C compiler: /usr/bin/cc
-- Check for working C compiler: /usr/bin/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/bin/c++
-- Check for working CXX compiler: /usr/bin/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Configuring done
-- Generating done
-- Build files have been written to: /home/shin/workspace/code_exercise_3d_objects/build


in build/ on master 
› make
Scanning dependencies of target 3dObjects
[  7%] Building CXX object src/CMakeFiles/3dObjects.dir/Color.cpp.o
[ 14%] Building CXX object src/CMakeFiles/3dObjects.dir/Shape.cpp.o
[ 21%] Building CXX object src/CMakeFiles/3dObjects.dir/Cone.cpp.o
[ 28%] Building CXX object src/CMakeFiles/3dObjects.dir/Cuboid.cpp.o
[ 35%] Building CXX object src/CMakeFiles/3dObjects.dir/Sphere.cpp.o
[ 42%] Building CXX object src/CMakeFiles/3dObjects.dir/ShapeFactory.cpp.o
[ 50%] Linking CXX static library lib3dObjects.a
[ 50%] Built target 3dObjects
Scanning dependencies of target UnitTest
[ 57%] Building CXX object test/CMakeFiles/UnitTest.dir/main.cpp.o
[ 64%] Building CXX object test/CMakeFiles/UnitTest.dir/Cone.cpp.o
[ 71%] Building CXX object test/CMakeFiles/UnitTest.dir/Cuboid.cpp.o
[ 78%] Building CXX object test/CMakeFiles/UnitTest.dir/Sphere.cpp.o
[ 85%] Building CXX object test/CMakeFiles/UnitTest.dir/Color.cpp.o
[ 92%] Building CXX object test/CMakeFiles/UnitTest.dir/ShapeFactory.cpp.o
[100%] Linking CXX executable UnitTest
[100%] Built target UnitTest


in build/ on master 
› test/UnitTest 
===============================================================================
All tests passed (69 assertions in 13 test cases)

```

