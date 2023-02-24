#pragma once

#include "Vehicule.h"
#include "Compartiment.h"

class Autopompe : public Vehicule
{
private:
	int _nbGallons;
	Compartiment _compartiments[7];

public:
	Autopompe(int numero, int nbPassagers, int nbGallons);

	int getNbGallons() const;

	void ajouterEquipement(Equipement const& equipement, int noCompartiment);
	bool rechercherEquipementParId(std::string id);
	void afficherDetails(std::ostream& flux);
};

