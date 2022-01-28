/*
 Programme : ValeurNegative
 But :  Calculer le nombre de valeur négative dans un tableau
 Date de dernière modification : 25 août 2015
 Auteur : Cocheril Titouan
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES

    int nbValeurNegative;
    nbValeurNegative =0;
    int NB_CASES = 10;
    float tab[NB_CASES] = {-1,2,3,4,5,6,7,8,9,-4};
    
    // TRAITEMENTS
for (int i=0;i<=NB_CASES-1;i++)
{
    if(tab[i]<0)
    {
        nbValeurNegative ++;
    }
}
cout<<"Le nombre de valeur negative dans le tableau est de : " <<nbValeurNegative;



    return 0;
}