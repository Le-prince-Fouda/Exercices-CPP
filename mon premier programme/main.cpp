#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
     string const nomFichier("A:/Programme C++/Fonction/flux.txt");
     ofstream monFlux(nomFichier.c_str(), ios::app);

      if(monFlux)
        {
             monFlux << "Bonjour, nouveau mot écris." << endl;
      monFlux << 888888 << endl;
             int age(16);
              monFlux << "J'ai " << age << " ans." << endl;
               cout << "ECRITURE TERMINEE" << endl;
        }
         else
            {
                cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
            }
return 0;
}
