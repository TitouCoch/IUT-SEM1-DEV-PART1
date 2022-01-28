/*
 Programme : Saisie et vérfication d'une note avec message d'erreur
 But :  sasir une note et vérifier sa valeur et donner un message d'erreur si erreur
 Date de dernière modification : 22 septembre 2021
 Auteur : Cocheril Titouan
 Remarques : Code conforme aux spécifications internes vues en TD2
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    int valeur;  //valeur saisi 

    // TRAITEMENTS
    // clavier >> saisir nb1  >> nb1

    cout << "Entrez la valeur de nb1  comprise entre 0 et 20 : ";
     cin >> valeur;

    while (!(0<=valeur && valeur<=20)){

        cout << "La valeur doit être comprise entre 0 et 20. Recommencer ";
     cin >> valeur;

    }
        


    // nb1 >> afficher nb1 >> ecran
 
    cout << "merci" << endl;
    cin >> valeur;
    return 0;
}