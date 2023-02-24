#pragma once

#include <string>

class Equipement
{
private:
	std::string _id;
	std::string _type;

public:
	Equipement();
	Equipement(std::string id, std::string type);

	std::string getId() const;
	std::string getType() const;
};

