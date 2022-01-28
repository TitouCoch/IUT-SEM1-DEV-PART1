/*
 Programme : InverserValeurTab
 But :  Inverser les valeurs d'un tableau
 Date de dernière modification : 19 octobre 2021
 Auteur : T. Cocheril
 Remarques : Code conforme aux spécification internes données en cours
*/

#include <iostream>
using namespace std;


void inverserValTab (int tab[],unsigned int nbCase);
/* But : compter le nombre de valeurs positive dans un tableau */

int main (void)
{

//Variables
const int NB_CASES = 13;
int note[NB_CASES] = {0,-1,2,3,4,5,4,5,-6,7,-8,9,10};



//Traitements

inverserValTab(note,13);


    return 0;
}

void inverserValTab(int tab[],unsigned int nbCase)
    {
        cout<<"Valeurs du tableau :"<<endl;
        for(int i=0;i<nbCase;i++)
        {
        cout<<tab[i]<<" "  ;
        }
        cout<<endl;
        cout<<"Valeurs inverse du tableau"<<endl;
        for(int i=nbCase-1;i>=0;i--)
        {
        cout<<tab[i]<<" "  ;
        }
    }
