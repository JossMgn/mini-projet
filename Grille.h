#pragma once
#include <SFML/Graphics.hpp>
#include "Cellule.h"
#include <iostream>
#include <vector>
using namespace std;

class Grille {
	Cellule tabCellule_[10][10];

public:
	Grille(); //PRobleme
	//~Grille();
	Cellule operator[](int i, int j);
	void ajouterCellule(int x, int y);
	void supprimerCellule(int x, int y);
	void affichertabCellule_();
	//void saveGrille();
};
