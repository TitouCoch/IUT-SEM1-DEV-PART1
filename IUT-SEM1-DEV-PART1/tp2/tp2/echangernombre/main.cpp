/*
 Programme : Echanger-nombre
 But :  echange deux valeurs entrée au clavier
 Date de dernière modification : 0 septembre 2021
 Auteur : V. Le Roux
 Remarques : Code conforme aux spécifications internes vues en TD2
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    int nb1;  //valeur saisi a échanger avec nb2
    int nb2;  //valeur saisi a échanger avec nb1
    int temp;  //Variable temporaire servant a l'échange de nb1 et nb2

    // TRAITEMENTS
    // clavier >> saisir nb1 et nb >> nb1, nb2
     cout << "Entrez la valeur de nb1 : ";
     cin >> nb1;
     cout << "Entrez la valeur de nb2 : ";
     cin >> nb2;

    // nb1, nb2 >> echanger nb1 et nb2 >> nb1, nb2

    temp = nb1;
    nb1 = nb2;
    nb2 = temp;
    
    // nb1, nb2 >> afficher nb1 et nb2 >> ecran
    cout << "Apres echange de valeurs" <<endl ;
    cout << "nb1 vaut : "<< nb1 << "nb2 vaut : " << nb2 << endl;
    cin >> nb1;
    return 0;
}