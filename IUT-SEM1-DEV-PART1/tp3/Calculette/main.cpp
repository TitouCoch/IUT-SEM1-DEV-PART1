/* Programme : Calculette
But : faire une opération avec la calculette et obtenir un résultat 
Auteur : Cocheril Titouan
Date de dernière modification : 30 septembre 2021
Remarque : 
*/

#include <iostream>
using namespace std;

int main (void)
{
    //VARIABLES
    int nb1;
    int nb2;
    char operateur;
    int resultat;

    //SAISIR LES NOMBRES ET OPERATEUR

    cout << "Saisir un nombre 1 : ";
    cin >> nb1;
 

    while (true)
    {
        cout << "Saisir votre operateur";
        cin >> operateur;
    if ((operateur == '+') || (operateur == '-') || (operateur == '/') || (operateur == '*'))
    {
    break;
    }
    else
    {
    cout << "Vous avez entrer une mauvaise valeur, veuillez recommencer ! " << endl;
    cout << ""<< endl;
        }
 
        
    }


    cout << "Saisir un nombre 2 ";
        cin >> nb2;  
        cout << "Le calcule est : "<<nb1 <<" "<<operateur<<" "<<nb2 <<endl;





    return 0;
}