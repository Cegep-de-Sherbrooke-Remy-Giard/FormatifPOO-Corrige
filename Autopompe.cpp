#include "Autopompe.h"

using namespace std;

Autopompe::Autopompe(int numero, int nbPassagers, int nbGallons) : Vehicule(numero, nbPassagers), _nbGallons(nbGallons)
{
	_compartiments[0] = Compartiment(0);
	_compartiments[1] = Compartiment(1);
	_compartiments[2] = Compartiment(2);
	_compartiments[3] = Compartiment(3);
	_compartiments[4] = Compartiment(4);
	_compartiments[5] = Compartiment(5);
	_compartiments[6] = Compartiment(6);
}

int Autopompe::getNbGallons() const
{
	return _nbGallons;
}

void Autopompe::ajouterEquipement(Equipement const& equipement, int noCompartiment)
{
	_compartiments[noCompartiment] += equipement;
}

bool Autopompe::rechercherEquipementParId(std::string id)
{
	for (int i = 0; i < 7; i++) {
		Compartiment c = _compartiments[i];
		if (c.rechercherEquipementParId(id)) {
			cout << "L'équipement '" << id << "' a été trouvé dans le compartiment #" << (i + 1) << endl;
			return true;
		}
	}

	cout << "L'équipement '" <<  id << "' n'a pas été trouvé dans ce véhicule." << endl;

	return false;
}

void Autopompe::afficherDetails(ostream& flux)
{
	flux << "Autopompe" << endl;
	flux << "=========" << endl << endl;

	for (int i = 0; i < 7; i++) {
		flux << "Compartiment #" << i + 1 << endl;
		flux << "---------------" << endl;
		flux << _compartiments[i] << endl;
	}
}