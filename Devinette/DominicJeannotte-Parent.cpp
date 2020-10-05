//But:: Le programme pourrait indiquer si la valeur à trouver est plus grande ou plus petite que la dernière proposition que l'utilisateur a faite.
//Auteur: Domininc Jeannotte-Parent
//Date:2020/10/04



#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	int iRandom; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
	int nombre;
	srand(time(0)); // pour activer l’aléatoire dans le programme
	iRandom = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom
	setlocale(LC_ALL, "");
	
	cout << "Un numéro à été généré essayer de deviner lequel! " << endl << "Votre réponse: ";
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
		cout << "Bonne réponse ! ";
	}
	else
		cout << endl << "Veuillez réassayer";
}// Je n'ai pas réussi à comprendre l'excercice 2, donc j'ai fait une version plus simple qui ne répond pas à tous les critères. J'ai passé 3 heures uniquement sur l'exercice 2.