#include "supprimer.h"

using namespace std;

/*Cette fonction parcours le tableau des candidat (la liste des cadidats) en comparant à chaque fois la valeur
  de la NCIN d'une cellule avec celle qu'elle recherche. Si les deux valeurs coincident, elle supprime le candidat
  (ses coordonnées) en question ainsi que la cellule du tableau dans laquelle il se trouvait*/
void supprimerCandidat(string& ncin, vector<Cancdidat>& liste)
    {
        int tailleListe;
        tailleListe = liste.size();
       for(int i = 0; i < tailleListe; i++)
           {
               string val;
              val = liste[i].getNCinCandidat();
              if(val == ncin)
                  {
                    liste[i].~Cancdidat();
                   liste.erase(liste.begin() + --i);  /* Supprime une case en milieu de tableau (la cellule est
                                                         supprimer peu importe où elle se trouve dans le tableau)*/
                  }
           }
    }





void supprimerMatiere( string& code, vector<Matiere>& liste1)
    {
        int tailleListe1;
        tailleListe1 = liste1.size();
       for(int i = 0; i < tailleListe1; i++)
           {
               string val;
              val = liste1[i].getCode();
              if(val == code)
                  {
                    liste1[i].~Matiere();
                   liste1.erase(liste1.begin() + --i);
                  }
           }
    }
