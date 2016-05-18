#include "hello.hpp"
#include <atlas/world.hpp>
#include "gtest/gtest.h"

TEST(helloTest, testHello)
{
    hello greeter;
    world earth;
    EXPECT_EQ("bonjour, world", greeter.greet("bonjour", earth));
}
