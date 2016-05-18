#include "hello.hpp"

std::string hello::greet(const std::string& greeting, const world& w) const
{
    return greeting + ", " + w.name();
}

