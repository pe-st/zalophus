#include <iostream>
#include <atlas/world.hpp>
#include <greeting/hello.hpp>


int main (int argc, char* argv[])
{
    hello a;
    world oneWorld;
    std::cout << a.greet("Hello", oneWorld) << ", I'm 'a'. How are you?";
    return 0;
}
