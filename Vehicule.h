#pragma once

#include <iostream>
#include <string>
#include "Compartiment.h"

class Vehicule
{
protected:
	Vehicule(int, int);

	int _numero;
	int _nbPassagers;

public:
	int getNumero() const;
	int getNbPassagers() const;

	virtual void ajouterEquipement(Equipement const& equipement, int noCompartiment) = 0;
	virtual bool rechercherEquipementParId(std::string id) = 0;
	virtual void afficherDetails(std::ostream& flux) = 0;
};
