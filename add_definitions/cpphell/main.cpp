// main.cpp

#include "a.h" // DANGER will not be defined from here

#include <iostream>

void just_segfault() {
    A a; 

    // segmentation fault on 'a' destructor
}

void verbose_segfault() {
    A *a = new A();
    delete a;
}

int main(int argc, char **argv) {
    std::cout << "sizeof(A) in main.cpp = " << sizeof(A) << std::endl;

    // verbose_segfault(); // uncomment this 
    
    just_segfault();

    std::cout << "This line won't be printed" << std::endl;

    return 0;
}