/*
 Programme : MoyenneNotes
 But :  Fonction qui détermine la moyenne des valeurs stokées dans un tableau
 Date de dernière modification : 27 octobre 2021
 Auteur : T. Cocheril
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;


//Fonctions
float moyNote(float tab[], unsigned int NB_CASES);
/*But :Déterminer la moyenne des valeurs stoké dans tab */

int main(void)
{
const int NB_CASES = 13;
float note[NB_CASES] = {0,1,2,3,4,5,4,5,6,7,8,9,10};

float resultat;
resultat = moyNote(note,13);
cout << resultat;

    return 0;
}

float moyNote(float tab[], unsigned int NB_CASES)
{
    float somme = 0;
    for (int i = 0; i <= NB_CASES; i++)
    {
        somme = somme + tab[i];
    }
    return somme / NB_CASES;
}

