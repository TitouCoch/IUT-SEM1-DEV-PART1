/*
 Programme : Valeur Absolue
 But :  Donner la valeur Absolue d'un nombre
 Date de dernière modification : 27 octobre 2021
 Auteur : T. Cocheril
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;


double absolue(double nb1);
/*But : donner la valeur absolue d'un nombre*/


int main (void)
{

//Variables

double valeur1; //valeur du prix intiales rentré par l'utilisateur


cout<< "Entrez un nombre 1 : "; cin>> valeur1 ;


cout<<"La valeur absolue est "<<absolue(valeur1);


    return 0;
}


double absolue(double nb1)
    {
        return(nb1<0? -nb1:nb1);
    }
