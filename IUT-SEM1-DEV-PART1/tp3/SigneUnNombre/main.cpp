/*
 Programme : Signe d'un nombre
 But :  donner le signe d'un nombre
 Date de dernière modification : 17 septembre 2021
 Auteur : T. Cocheril
 Remarques : Code conforme aux spécifications internes vues en TD2
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    int nb1;  //valeur saisi 

    cout << "Entrez la valeur de nb1 : ";
     cin >> nb1;
 
    
    // nb1, >> afficher nb1 >> ecran
	
    if (nb1 < 0)
    {
         cout << "Nombre négatif";
    }
    else if (nb1 == 0)
    {
        cout << "Nombre nul";
    }
    else 
    {
        cout << "Nombre positif";
    }
     cin >> nb1;
}