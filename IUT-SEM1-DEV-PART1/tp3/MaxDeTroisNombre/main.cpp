/*
 Programme : Max de trois nombres
 But : comparer trois nombres et donner le plus grand
 Date de dernière modification : 17 septembre 2021
 Auteur : T. Cocheril
 Remarques : Code conforme aux spécifications internes vues en TD2
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    int nb1;  //valeur saisi nb1
    int nb2;  //valeur saisi nb2
    int nb3; //valeur saisi nb3

      // TRAITEMENTS
    // clavier >> saisir nb1 et nb >> nb1, nb2
     cout << "Entrez la valeur de nb1 : ";
     cin >> nb1;
     cout << "Entrez la valeur de nb2 : ";
     cin >> nb2;
     cout << "Entrez la valeur de nb3 : ";
     cin >> nb3;


     // nb1, nb2 >> echanger nb1 et nb2 >> nb1, nb2

   
    // nb1, >> afficher nb1 >> ecran
	
    if (nb1 < 0)
    {
         cout << "Nb2 est plus grand que Nb1";
    }
    else if (nb1 == 0)
    {
        cout << "Les deux nombre sont identique";
    }
    else 
    {
        cout << "Nb1 est plus grand que Nb2";
    }
     cin >> nb1;
}