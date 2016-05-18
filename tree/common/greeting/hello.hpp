#ifndef COMMON_GREETING_HELLO_HPP_INCLUDED
#define COMMON_GREETING_HELLO_HPP_INCLUDED

#include <string>
#include <atlas/world.hpp>

class hello {
public:

    std::string greet(const std::string& greeting, const world& w) const;
};

#endif //COMMON_GREETING_HELLO_HPP_INCLUDED
