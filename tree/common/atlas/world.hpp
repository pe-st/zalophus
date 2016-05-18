#ifndef COMMON_ATLAS_WORLD_HPP_INCLUDED
#define COMMON_ATLAS_WORLD_HPP_INCLUDED

#include <string>

class world
{
public:

    world();

    const std::string& name() const;

private:
    std::string name_;
};

#endif // COMMON_ATLAS_WORLD_HPP_INCLUDED
