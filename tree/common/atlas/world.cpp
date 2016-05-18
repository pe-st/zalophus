#include "world.hpp"

world::world()
    : name_("world")
{
}

const std::string& world::name() const
{
    return name_;
}
