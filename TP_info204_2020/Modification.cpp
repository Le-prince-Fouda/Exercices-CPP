#include "Modification.h"

using namespace std;

void apporterModification(bool i)
    {
         cout << endl << "Desirez vous apporter des modifications aux enregistrements precedent?" << endl;
         cout << "Entrez \"TRUE\" si oui et \"FALSE\" sinon"<< endl;
         cin >> i;
         if (i == true)
             {
                 cout << "Que desirez vous modifier?"<< endl;
                 cout << "Tapez \"1\" pour modifier des candidats, \"2\" pour Matiere, \"3\" pour une evaluation"<< endl;
                 int choix;
                 switch (choix)
                     {
                          case 1:  cout << "Eh bien alors, vous n'avez pas d'enfant ?" << endl;
                            break;
                          case 1:  cout << "Alors, c'est pour quand le deuxieme ?" << endl;
                            break;
                          case 2:   cout << "Quels beaux enfants vous avez la !" << endl;
                            break;
                          default:   cout << "Bon, il faut arreter de faire des gosses maintenant !" << endl;
                            break;
                     }
             }
    }
