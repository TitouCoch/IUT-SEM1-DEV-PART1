/*
 Programme : 5 nombres suivants
 But :  affiché les 5 prochains nombres à partir d'un nombre
 Date de dernière modification : 24 septembre 2021
 Auteur : Cocheril Titouan
 Remarques : Code conforme aux spécifications internes vues en TD2
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    int nombre;  //nombre saisi 
     int resultat;  //resultat du calcule 
     resultat =0;
  int i;



    // TRAITEMENTS
    // clavier >> saisir nb1  >> nb1

    cout << "Entrez un nombre quelquonque : ";
     cin >> nombre;



for( i=1;i<=5;i++ )
{
    resultat = nombre + i ;
    cout << resultat << endl;
    
}


    // nb1 >> afficher nb1 >> ecran
 
    cout << "les 5 prochains nombre sont :" << resultat <<endl;
    cin >> nombre;
    return 0;
}