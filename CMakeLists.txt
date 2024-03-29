cmake_minimum_required(VERSION 3.20)
project(C_OOP_Prj2)

set(CMAKE_CXX_STANDARD 14)

add_executable(Test Test.cpp)
# 演示C++ cout输出案例
add_executable(Test1 T01_Base/Test1.cpp)
# 演示C++ 输入与输出
add_executable(Test2 T01_Base/Test2.cpp)
# 演示内存管理
#add_executable(StackTest T01_Base/Test3_Stack.cpp)
#add_executable(HeapTest T01_Base/Test4_Heap.cpp)
#add_executable(ObjectStackAndHeap T01_Base/Test5_ObjectStackAndHeap.cpp)
#add_executable(ArrayHeap T01_Base/Test6_ArrayHeap.cpp)
#
#
#add_executable(TestStudent T02_ClassAndObject/TestStudent.cpp)
##add_executable(TestStudent2 T02_ClassAndObject/TestStudent2.cpp)
## 类与对象银行账户案例
#add_executable(TestBaseAccount T02_ClassAndObject/TestBaseAccount.cpp)
#add_executable(TestBaseAccount2 T02_ClassAndObject/TestBaseAccount_menu.cpp)
#
#add_executable(TestRectangle T02_ClassAndObject/TestRectangle.cpp)
#
#add_executable(Constructor1 T03_Constructor/TestConstructor1.cpp)
#add_executable(Constructor2 T03_Constructor/TestConstructor2.cpp)
#add_executable(Constructor3 T03_Constructor/TestConstructor3.cpp)

#演示定义类的三种方式
add_executable(ClassDef1 T04_ClassDefinition/ClassDef1.cpp)
add_executable(ClassDef2 T04_ClassDefinition/ClassDef2.cpp)
add_executable(ClassDef3 T04_ClassDefinition/StudentTest.cpp)

add_executable(inheritance1 T05_inheritance/Test1.cpp)
add_executable(inheritance2 T05_inheritance/Test2.cpp)








