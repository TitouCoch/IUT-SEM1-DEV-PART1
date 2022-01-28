/*
 Programme : Numero groupe TD
 But :  donner le groupe de TD en fonction du groupe de TP
 Date de dernière modification : 17 septembre 2021
 Auteur : T. Cocheril
 Remarques : Code conforme aux spécifications internes vues en TD2
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    int tp;  //valeur saisi 

    cout << "Entrez votre numero de TP : ";
     cin >> tp;
 
    
    // nb1, >> afficher nb1 >> ecran
	
    if (tp== 1)
    {
         cout << "Vous etes dans le TD1 ";
    }
    else if (tp == 2)
    {
        cout << "Vous etes dans le TD1";
    }
     else if (tp == 3)
    {
        cout << "Vous etes dans le TD2";
    }
         else if (tp == 4)
    {
        cout << "Vous etes dans le TD2";
    }
         else if (tp == 5)
    {
        cout << "Vous etes dans le TD3";
    }
    else 
    {
        cout << "Erreur de saisie";
    }
     cin >> tp;
}