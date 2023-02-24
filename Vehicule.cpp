#include "Vehicule.h"

using namespace std;

Vehicule::Vehicule(int numero, int nbPassagers)
{
    _numero = numero;
    _nbPassagers = nbPassagers;
}

int Vehicule::getNumero() const
{
    return _numero;
}

int Vehicule::getNbPassagers() const
{
    return _nbPassagers;
}
