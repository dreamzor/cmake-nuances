// lib.h

#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED

#include <iostream>

static void foo() { 
#ifdef MYFLAG
    std::cout << "foo: all good!" << std::endl;
#else 
    std::cout << "foo: you're screwed :(" << std::endl;
#endif
}

void bar(); // implementation in lib.cpp

#endif // LIB_H_INCLUDED