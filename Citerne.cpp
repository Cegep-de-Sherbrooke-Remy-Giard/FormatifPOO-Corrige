#include "Citerne.h"

using namespace std;

Citerne::Citerne(int numero, int nbPassagers, int nbGallons) : Vehicule(numero, nbPassagers), _nbGallons(nbGallons)
{
	_compartiments[0] = Compartiment(0);
	_compartiments[1] = Compartiment(1);
	_compartiments[2] = Compartiment(2);
	_compartiments[3] = Compartiment(3);
}

int Citerne::getNbGallons() const
{
	return _nbGallons;
}

bool Citerne::rechercherEquipementParId(std::string id)
{
	for (int i = 0; i < 4; i++) {
		Compartiment c = _compartiments[i];
		if (c.rechercherEquipementParId(id)) {
			cout << "L'équipement " << id << " a été trouvé dans le compartiment #" << (i + 1) << endl;
			return true;
		}
	}

	cout << "L'équipement n'a pas été trouvé dans ce véhicule." << endl;

	return false;
}

void Citerne::ajouterEquipement(Equipement const& equipement, int noCompartiment)
{
	_compartiments[noCompartiment] += equipement;
}

void Citerne::afficherDetails(ostream& flux)
{
	flux << "Citerne" << endl;
	flux << "=======" << endl << endl;

	for (int i = 0; i < 4; i++) {
		flux << "Compartiment #" << i + 1 << endl;
		flux << "---------------" << endl;
		flux << _compartiments[i] << endl;
	}
}
