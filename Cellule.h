#pragma once
#include <iostream>
using namespace std;
#include<string>

class Cellule
{
	string Couleur_;
	int Coor_[2];	//En 0 le x et en 1 le y

public:
	Cellule();

	string  getCouleur() const{ return Couleur_; }
	int  getx()const { return Coor_[0]; }
	int  gety()const { return Coor_[1]; }
	void setx(float x) { Coor_[0] = x; }
	void sety(float y) { Coor_[1] = y; }
	void setCouleur(string col) { Couleur_ = col; }
	void  afficher()const { cout << "La couleur de la cellule est " << Couleur_ << " et sa postion est(" << Coor_[0] << "," << Coor_[1] << ")" << endl; };


};
