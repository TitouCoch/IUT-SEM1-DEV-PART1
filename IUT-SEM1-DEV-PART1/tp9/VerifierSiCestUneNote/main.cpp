/*
 Programme : VerifNote
 But :  Verifier si c'est une note
 Date de dernière modification : 27 octobre 2021
 Auteur : T. Cocheril
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;


bool verifNote(float nb1);
/*But :Verifier que le nombre est compris entre 0 et 20 et retourner vrai ou faux*/


int main (void)
{

//Variables

float valeur1; //valeur du prix intiales rentré par l'utilisateur


cout<< "Entrez un nombre 1 : "; cin>> valeur1 ;

if (verifNote(valeur1))
{
    cout<<"Vrai";
}
else
{
    cout<<"Faux";
}

    return 0;
}


bool verifNote(float nb1)
    {
        if (nb1<=20 && nb1>=0)
        {
            return true;
        }
        else
        {
            return false;
        }  
    }

