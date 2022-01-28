/*
 Programme : Ecchanger deux nombre
 But :  Faire l'échange de deux nombres
 Date de dernière modification : 19 octobre 2021
 Auteur : T. Cocheril
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;


void echangerDeuxNombre(float& nb1,float& nb2);
/*But : echanger deux nombres entiers*/


int main (void)
{

//Variables

float valeur1; //valeur du prix intiales rentré par l'utilisateur
float valeur2; //valeur du pourcentage de réduction rentré par l'utilisateur

cout<< "Entrez un nombre 1 : "; cin>> valeur1 ;
cout<< "Entrez un nombre 2 : "; cin>> valeur2 ;

echangerDeuxNombre(valeur1,valeur2);
cout<< "Nb1 est egale a : "<< valeur1 <<endl;
cout<< "Nb2 est egale a : "<< valeur2 <<endl;

    return 0;
}


void echangerDeuxNombre(float& nb1,float& nb2)
    {
        float temp = nb1;
        nb1 = nb2;
        nb2 = temp;
    }
