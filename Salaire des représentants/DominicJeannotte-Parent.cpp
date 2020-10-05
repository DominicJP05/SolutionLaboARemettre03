// But: Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et
// affiche son salaire.Entrez - 1 à la valeur des ventes pour quitter le programme.
// Auteur: Dominic Jeannotte-Parent-
// Date: 03/10/2020

#include <iostream>;
using namespace std;


int main()
{
	setlocale(LC_ALL, "");

	// Déclarations des variables
	float salaireBrut;
	float salaireNet;
	salaireNet = 250;  // Salaire de base

	
	cout << "Veuillez entrer le total des ventes brutes: "; // demande à l'utilisateur le montant des ventes
	cin >> salaireBrut; // stockage dans la variable
	
	
	while (salaireBrut <= -2)
	{
		cout << "Vous ne pouvez pas avoir vendu un nombre négatif. Réassayer." << endl;
		cout << "Veuillez entrer le total des ventes brutes: "; // demande à l'utilisateur le montant des ventes
		cin >> salaireBrut; // stockage dans la variable
	}
	while (salaireBrut == -1) // Pendant que le salaireBrut est de -1 on return 0; pour finir le programme sinon on continue.
	{
		cout << "Fin du programme.";
		return 0;
	}
	salaireNet = salaireNet + (salaireBrut * 0.075); // Calcul 7.5% du salaire
	cout << "Votre salaire pour la semaine est de " << salaireNet << " $."; // Affichage du salaire en console



	return 0;
}

/*
Plan de test:

Salaire Brute		SalaireNet
-1					fin du programme
0						250$
4500					587.5$
1200					340$
-50					nouvelle requête (erreur)
*/