#include<iostream>
using namespace std;

int MenuStart() {
	int choix;
	cout << "Bonjour" << endl << endl;
	cout << "1/ Initialiser une nouvelle grille" << endl << "2/ Charger une grille existante" << endl;

	do{
		cout << endl << "Que voulez-vous faire ?";
		cin >> choix;
	while (choix < 1 || choix>2);
}
