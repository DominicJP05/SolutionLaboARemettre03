//But:: Le programme pourrait indiquer si la valeur � trouver est plus grande ou plus petite que la derni�re proposition que l'utilisateur a faite.
//Auteur: Domininc Jeannotte-Parent
//Date:2020/10/04



#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	int iRandom; // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur
	int nombre;
	srand(time(0)); // pour activer l�al�atoire dans le programme
	iRandom = rand() % 101; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans iRandom
	setlocale(LC_ALL, "");
	
	cout << "Un num�ro � �t� g�n�r� essayer de deviner lequel! " << endl << "Votre r�ponse: ";
	cin >> nombre;

	if (nombre > iRandom)
	{
		cout << "C'est plus petit !";
	}
	if (nombre < iRandom)
	{
		cout << "C'est plus grand !";
	}
	if (nombre == iRandom)
	{
		cout << "Bonne r�ponse ! ";
	}
	else
		cout << endl << "Veuillez r�assayer";
}// Je n'ai pas r�ussi � comprendre l'excercice 2, donc j'ai fait une version plus simple qui ne r�pond pas � tous les crit�res. J'ai pass� 3 heures uniquement sur l'exercice 2.