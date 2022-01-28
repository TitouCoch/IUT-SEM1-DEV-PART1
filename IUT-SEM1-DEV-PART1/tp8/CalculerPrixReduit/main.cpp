/*
 Programme : calculer prix reduit
 But :  calculer un prix après reduction
 Date de dernière modification : 19 octobre 2021
 Auteur : T. Cocheril
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;


void calculerPrixReduit(float prixInit,float pourReduc, float& resultat);
/*But : calculer le prix après rédution en fonction du prix initiale et le renvoyer dans résultat*/


int main (void)
{

//Variables

float valeur1; //valeur du prix intiales rentré par l'utilisateur
float valeur2; //valeur du pourcentage de réduction rentré par l'utilisateur



cout<< "Entrez le prix intiale : "; cin>> valeur1 ;
cout<< "Entrez le pourcentage de reduction : "; cin>> valeur2 ;

float result;
calculerPrixReduit(valeur1,valeur2 ,result);
cout<< result;

    return 0;
}


void calculerPrixReduit(float prixInit,float pourReduc, float& resultat)
    {
        resultat =  (prixInit -prixInit *(pourReduc/100));
    }
