#pragma once

#include <iostream>
#include "Vehicule.h"
#include "Compartiment.h"

class Citerne : public Vehicule
{
private:
	int _nbGallons;
	Compartiment _compartiments[4];

public:
	Citerne(int numero, int nbPassagers, int nbGallons);

	int getNbGallons() const;
	bool rechercherEquipementParId(std::string id);
	void ajouterEquipement(Equipement const& equipement, int noCompartiment);
	void afficherDetails(std::ostream& flux);
};

