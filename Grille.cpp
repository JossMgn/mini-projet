#include "Grille.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

Grille::Grille()
{
	for (unsigned int i = 0; i < 10; i++)
	{
		for (unsigned int j = 0; j < 10; j++)
		{
			tabCellule_[i][j].setx(i);
			tabCellule_[i][j].sety(j);
			tabCellule_[i][j].setCouleur("White");
		}
	}
}


void Grille::ajouterCellule(int x, int y)
{
	
	tabCellule_[x][y].setCouleur("Green");
	tabCellule_[x][y].afficher();
}
void Grille::supprimerCellule(int x, int y)
{
	tabCellule_[x][y].setCouleur("White");
	
}

void Grille::affichertabCellule_()
{
	for (unsigned int i = 0; i < 10; i++)
	{
		for (unsigned int j = 0; j < 10; j++)
		{
			if (tabCellule_[i][j].getCouleur()!="White")
			{
				cout << "|Position : " << tabCellule_[i][j].getx() << " , " << tabCellule_[i][j].gety() << endl;
				cout << "|Couleur : " << tabCellule_[i][j].getCouleur() << endl;
			}
			
		}
	}
	cout << "--------------------" << endl;
}

void Grille::operator[](int i, int j) {
	return tabCellule_[i][j];
}
