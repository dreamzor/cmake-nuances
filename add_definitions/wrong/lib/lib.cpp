// lib.cpp

#include "lib.h"

void bar() { 
#ifdef MYFLAG
    std::cout << "bar: all good!" << std::endl;; 
#else 
    std::cout << "bar: you're screwed :(" << std::endl;;
#endif
}