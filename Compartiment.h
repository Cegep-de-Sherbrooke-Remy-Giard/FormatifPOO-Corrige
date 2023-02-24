#pragma once

#include <iostream>
#include <string>
#include "Equipement.h"

class Compartiment
{
private: 
	int _numero;
	Equipement _equipements[20];
	int _nbEquipements;

public:
	Compartiment();
	Compartiment(int numero);

	bool rechercherEquipementParId(std::string id);

	void operator += (Equipement const& equipement);
	void operator -= (int const& nbEquipementAEnlever);

	friend std::ostream& operator<<(std::ostream& flux, Compartiment const& c);
};
