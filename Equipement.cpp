#include "Equipement.h"

Equipement::Equipement() : _id(""), _type("")
{
}

Equipement::Equipement(std::string id, std::string type) : _id(id), _type(type)
{
}

std::string Equipement::getId() const
{
    return _id;
}

std::string Equipement::getType() const
{
    return _type;
}
