#include "Compartiment.h"

using namespace std;

Compartiment::Compartiment() :  _numero(0)
{
	_nbEquipements = 0;
}

Compartiment::Compartiment(int numero) : _numero(numero)
{
	_nbEquipements = 0;
}

bool Compartiment::rechercherEquipementParId(std::string id)
{
	for (int i = 0; i < 10; i++) {
		if (_equipements[i].getId() == id) {
			return true;
		}
	}

	return false;
}

void Compartiment::operator+=(Equipement const& equipement)
{
	if (_nbEquipements < 20) {
		_equipements[_nbEquipements] = equipement;
		_nbEquipements++;
	}
}

void Compartiment::operator-=(int const& nbEquipementAEnlever)
{
	if (nbEquipementAEnlever > _nbEquipements) {
		_nbEquipements = 0;
	}
	else {
		_nbEquipements -= nbEquipementAEnlever;
	}
}

ostream& operator<<(ostream& flux, Compartiment const& c)
{
	if (c._nbEquipements == 0) {
		flux << "Vide!" << endl;
		return flux;
	}

	for (int i = 0; i < c._nbEquipements; i++) {
		Equipement e = c._equipements[i];
		flux << "- " << e.getId() << ": " << e.getType() << endl;
	}

	return flux;
}
