/*
 Programme : CompterNombresDeValeurPositiveTab
 But :  Compter le nombres de valeurs positives dans un tableau
 Date de dernière modification : 19 octobre 2021
 Auteur : T. Cocheril
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;


void compterValPositive (float tab[],unsigned int nbCase, int & nbValPositive);
/* But : compter le nombre de valeurs positive dans un tableau */

int main (void)
{

//Variables
const int NB_CASES = 13;
float note[NB_CASES] = {0,-1,2,3,4,5,4,5,-6,7,-8,9,10};
int valPositive =0;


//Traitements

compterValPositive(note,13,valPositive);
cout<<"Il y a " << valPositive<< " valeurs positives dans ce tableau"<<endl;

    return 0;
}

void compterValPositive(float tab[], unsigned int nbCase, int & nbValPositive)
    {
        for(int i=0;i<=nbCase;i++)
        {
            if(tab[i]> 0)
            {
                nbValPositive ++;
            }
        }
    }
