#include <iostream>
using namespace std;

int main()
{
   int const nombreNotes(6);
   double notes[nombreNotes];

   notes[0] = 12.5;
   notes[1] = 19.5;  //Bieeeen !
   notes[2] = 6.;    //Pas bien !
   notes[3] = 12;
   notes[4] = 14.5;
   notes[5] = 15;
   
   double moyenne(0);
   for(int i(0); i<nombreNotes; ++i)
   {
      moyenne += notes[i];   //On additionne toutes les notes
   }
   //En arrivant ici, la variable moyenne contient la somme des notes (79.5)
   //Il ne reste donc qu'à diviser par le nombre de notes
   moyenne /= nombreNotes;
   
   cout << "Votre moyenne est : " << moyenne << endl;

   return 0;
}