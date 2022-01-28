/* Programme : Triangle opposé
But : afficher un triangle oposé d'une taille définie par l'utilisateur
Auteur : Cocheril Titouan
Date de dernière modification : 30 septembre 2021
Remarque : 
*/

#include <iostream>
using namespace std;

int main (void)
{
    //VARIABLES

    int ligne; //nombre 1
    int a; 
    int i;

    cout << "Saisir un nombre : " ;
    cin >> ligne;

    for (i = 0; i <ligne-1 ; i++)
    {
        for(a=ligne-i ; a>1; a--)
        {
            cout << "*" ;
        }
        cout <<""<<endl;
    }
    










    return 0;

}
