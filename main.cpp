#include <iostream>

#include "Citerne.h"

using namespace std;

int main(void) {
	std::setlocale(LC_ALL, "");
	cout.imbue(locale(""));

	Equipement id1("ID1", "Clé à boyau");
	Equipement cle1("CLE - 1", "Clé à boyau");
	Equipement cle2("CLE - 2", "Clé à boyau");
	Equipement cle3("CLE - 3", "Clé à boyau");
	Equipement colA1("COL - A1", "Collet cervical adulte");
	Equipement colE1("COL - E1", "Collet cervical enfant");
	Equipement gas1("GAS - 1", "Détecteur 4 gas");
	Equipement boy50("BOY - 50 - 134", "Boyau 50 pieds 1\"3/4");
	Equipement boy51("BOY - 51 - 212", "Boyau 50 pieds 2\"1/2");
	Equipement y21241("Y - 2x212 - 4 - 1", "Y 2x2\"1/2 par 4");
	Equipement sto221("STO - 2 - 2 - 1", "Adaptateur Storz 2\" x 2");
	Equipement sto112112("STO - 112 - 112 - 1", "Adaptateur Storz 1\"1/2 x 1\"1 / 2");

	Vehicule* citerne = new Citerne(207, 2, 1000);
	citerne->ajouterEquipement(id1, 0);
	citerne->ajouterEquipement(cle1, 0);
	citerne->ajouterEquipement(cle2, 0);
	citerne->ajouterEquipement(cle3, 0);
	citerne->ajouterEquipement(colA1, 0);
	citerne->ajouterEquipement(colE1, 0);
	citerne->ajouterEquipement(gas1, 0);

	citerne->ajouterEquipement(boy50, 1);
	citerne->ajouterEquipement(boy51, 1);
	citerne->ajouterEquipement(y21241, 1);
	citerne->ajouterEquipement(sto221, 1);
	citerne->ajouterEquipement(sto112112, 1);
	
	citerne->afficherDetails(cout);

	citerne->rechercherEquipementParId("ID1");
	citerne->rechercherEquipementParId("ID-INTROUVABLE");

	return 0;
}