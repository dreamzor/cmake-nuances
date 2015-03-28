// a.h

#ifndef A_INCLUDED
#define A_INCLUDED

#include <vector>
#include <string>

class A {
public:

    A(); // implementation in a.cpp with DANGER defined
    ~A(); // for illustrational purposes

#ifdef DANGER
    std::vector<int> just_a_vector_;
    std::string just_a_string_;
#endif // DANGER
}; 

#endif // A_INCLUDED