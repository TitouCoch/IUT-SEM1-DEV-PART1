#include <iostream>
using namespace std;

int main (void)
{
    // VARIABLES
    int noteOral;  //note d'oral de l'élève
    int noteEcrit;  //note écrit de l'élève
    int coefEcrit;  //coef écrit de l'élève
    int coefOral;  //coef oral de l'élève
    int noteModule; // note module de l'élève
 

    // TRAITEMENTS
    // clavier >> saisir note Oral et note Ecrit >> noteOral, noteEcrit;
    
     cout << "Entrez votre note d'oral: ";
     cin >> noteOral;
     cout << "Entrez votre coef d'écrit : ";
     cin >> coefOral;
    cout << "Entrez votre note d'oral: ";
     cin >> noteEcrit;
     cout << "Entrez votre coef d'écrit : ";
     cin >> coefEcrit;

    // noteOral, noteEcrit >> calculer note fin de module  >> noteModule

    noteModule = (noteOral * coefOral + noteEcrit * coefEcrit) / (coefOral + coefEcrit) ;
    
    // noteModule >> afficher résultat module >> ecran
    

    if (noteModule < 10){
       cout << "non reçu avec" << noteModule;
    }
    else
       cout << " admis avec"<< noteModule;
      cin >> noteModule;
    return 0;
}