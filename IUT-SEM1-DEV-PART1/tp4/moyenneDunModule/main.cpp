/*
 Programme : Moyenne Module
 But :  calculé la moyenne de 10 note saisie
 Date de dernière modification : 22 septembre 2021
 Auteur : Cocheril Titouan
 Remarques : Code conforme aux spécifications internes vues en TD2
*/

#include <iostream>
using namespace std;


int main (void)
{
    int somme;
    somme = 0;
    int i;
    int resultat;
    int note;


 for( i=1;i<=10;i++ )
{
    cout << "Saisir votre note";
    cin >> note;
    somme =somme + note;
    
}

resultat = somme/10;

cout << "La moyenne est de "<< resultat <<endl;
}