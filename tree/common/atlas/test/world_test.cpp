#include <atlas/world.hpp>
#include <gtest/gtest.h>

TEST(worldTest, testName)
{
    world w;
    EXPECT_EQ("world", w.name());
}
