/*
 Programme : PrixReduit
 But :  calcule le prix reduit a partir d'un prix initial et d'un taux de reduction saisi au calvier 
 Date de dernière modification : 0 septembre 2021
 Auteur : V. Le Roux
 Remarques : Code conforme aux spécifications internes vues en TD2
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    int valInit;  //valeur initiale saisi au clavier 
    int tauxReduc;  //valeur de la reduction saisi au clavier en %
    int valFin; //valeur final apres l'application du taux reduction a la valeu initiale

    // TRAITEMENTS
    // clavier >> saisir valInit et tauxReduc >> valInit, tauxReduc
     cout << "Entrez valInit: ";
     cin >> valInit;
     cout << "Entrez tauxReduc : ";
     cin >> tauxReduc;

    // valInit, tauxReduc >> Appliquer tauxReduc a valInit >> valFin

    valFin = valInit-valInit*tauxReduc/100;
    
    // valInit, tauxReduc >> afficher valfin >> ecran
    cout << " la vaelur finale est " <<endl ;
    cout << valFin;


    cin >> valFin;
    return 0;
}