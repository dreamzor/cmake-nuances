// a.cpp 

#define DANGER // let's have a situation

#include "a.h"

#include <iostream>

A::A() {
    std::cout << "sizeof(A) in A constructor = " << sizeof(A) << std::endl;
}

A::~A() {
    std::cout << "sizeof(A) in A destructor = " << sizeof(A) << std::endl;
    std::cout << "Segmentation fault incoming..." << std::endl;
}