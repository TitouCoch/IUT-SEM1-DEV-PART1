/*
 Programme : Ecchanger deux cases d'un tableau
 But :  Faire l'échange de deux case d'un tableau
 Date de dernière modification : 19 octobre 2021
 Auteur : T. Cocheril
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;


void echangerDeuxCasesTab(int tab[], unsigned int indice1, unsigned int indice2);
/*But : echanger deux cases d'un tableau*/


int main (void)
{

//Variables
const int NB_CASES = 13;
int note[NB_CASES] = {0,1,2,3,4,5,4,5,6,7,8,9,10};

int valeur1; //valeur du prix intiales rentré par l'utilisateur
int valeur2; //valeur du pourcentage de réduction rentré par l'utilisateur

cout<< "Quelle case voulez vous changer : "; cin>> valeur1 ;
cout<< "Avec quelle case souhaitez vous la changer : "; cin>> valeur2 ;

echangerDeuxCasesTab(note,valeur1,valeur2);
cout<< "Case "<<valeur1<<" est egale a : "<< note[valeur1] <<endl;
cout<< "Case "<<valeur2<<" est egale a : "<< note[valeur2] <<endl;

    return 0;
}


void echangerDeuxCasesTab(int tab[], unsigned int indice1, unsigned int indice2)
    {
       int temp = tab[indice1];
       tab[indice1] = tab[indice2];
       tab[indice2] = temp;
    }
