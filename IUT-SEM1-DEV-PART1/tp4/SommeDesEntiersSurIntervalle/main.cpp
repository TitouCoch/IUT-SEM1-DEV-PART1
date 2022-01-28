/*
 Programme : Somme des Entiers sur un intervalle
 But :  calculé la somme des entiers sur un intervalles saisi
 Date de dernière modification : 22 septembre 2021
 Auteur : Cocheril Titouan
 Remarques : Code conforme aux spécifications internes vues en TD2
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    int borne;  //borne saisi 
     int resultat;  //resultat du calcule 
     resultat =0;
      int i;  //valeur temporaire d'appuie



    // TRAITEMENTS
    // clavier >> saisir nb1  >> nb1

    cout << "Entrez la valeur de la borne comprise entre 1 et l'infinie : ";
     cin >> borne;

if(borne<1)
{
    while (!(borne>=1)){

        cout << "La valeur doit être comprise entre 1 et l'infinie. Recommencer ";
     cin >> borne;

    }
        
}

for( i=0;i<=borne;i++ )
{
    resultat = i + resultat;
    
}


    // nb1 >> afficher nb1 >> ecran
 
    cout << "la somme = " << resultat <<endl;
    cin >> borne;
    return 0;
}