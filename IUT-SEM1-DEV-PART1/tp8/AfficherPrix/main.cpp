/*
 Programme : Afficher prix reduit
 But :  Afficher un prix après reduction
 Date de dernière modification : 19 octobre 2021
 Auteur : T. Cocheril
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;


void afficherPrixReduit(float prixInit,float pourReduc);
/*But : Afficher le prix après rédution en fonction du prix initiale*/


int main (void)
{

//Variables

float valeur1; //valeur du prix intiales rentré par l'utilisateur
float valeur2; //valeur du pourcentage de réduction rentré par l'utilisateur

cout<< "Entrez le prix intiale : "; 
cin>> valeur1 ;
cout<< "Entrez le pourcentage de reduction : "; 
cin>> valeur2 ;

afficherPrixReduit(valeur1,valeur2);

    return 0;
}


void afficherPrixReduit(float prixInit,float pourReduc)
    {
        cout<< (prixInit -prixInit *(pourReduc/100))<<endl;
    }
