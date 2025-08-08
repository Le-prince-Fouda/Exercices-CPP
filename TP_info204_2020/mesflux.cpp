#include "mesflux.h"

using namespace std;

void fluxDefautCandidat(string nomConcours)
    {
         string const nomFichier("liste des candidats.txt");
         ofstream monFlux(nomFichier.c_str());
          if(monFlux)
        {
             monFlux << "Liste des candidats inscrits au concours de " <<nomConcours<< endl;
      monFlux << endl << "les informationdu d'un candidat sont notée ainsi: ncin; nom; prenom; âge" << endl << endl;

        }
         else
            {
                cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
            }
    }


void enregistrerCandidat(string ncin, string nom, string prenom, unsigned int age)
    {
       string const nomFichier("liste des candidats.txt");
     ofstream monFlux(nomFichier.c_str(), ios::app);

      if(monFlux)
        {
             monFlux << ncin << "; " << nom << "; " << prenom << "; " << age  << endl;

        }
         else
            {
                cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
            }
    }



void fluxDefautMatiere(string nomConcours)
    {
          string const nomFichier("liste des matières.txt");
         ofstream monFlux(nomFichier.c_str());
          if(monFlux)
        {
             monFlux << "Les matières de compositions au concours de " << nomConcours << endl;
      monFlux << endl << "les information des matières sont notée ainsi: code; libelle; coef" << endl << endl;

        }
         else
            {
                cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
            }
    }


void enregistrerMatiere(string code, unsigned int coef, string libelle)
    {
       string const nomFichier("liste des matières.txt");
     ofstream monFlux(nomFichier.c_str(), ios::app);

      if(monFlux)
        {
             monFlux << code << "; " << libelle << "; " << coef << endl;

        }
         else
            {
                cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
            }
    }

    //***********************************************

    void fluxDefautNote (string nomConcours)
            {
                 string const nomFichier("liste des notes.txt");
                 ofstream monFlux(nomFichier.c_str());
                  if(monFlux)
                {
                     monFlux << "Liste des notes des candidats inscrits au concours de " <<nomConcours<< endl;

                }
                 else
                    {
                        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
                    }
             }


    void notationDesCandidats_NoteCandidat(string ncin, string nom, string prenom, unsigned int note)
             {
               string const nomFichier("liste des notes.txt");
               ofstream monFlux(nomFichier.c_str(), ios::app);

              if(monFlux)
                    {
                         monFlux << ncin << " | " << nom + " " + prenom << " | " << note << endl;

                    }
              else
                    {
                        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
                    }
             }

void notationDesCandidats_Matiere(string code, unsigned int coef, string libelle)
            {
               string const nomFichier("liste des notes.txt");
               ofstream monFlux(nomFichier.c_str(), ios::app);

              if(monFlux)
                    {
                         monFlux << libelle << " " << code << "Coefficient" << coef << endl;

                         //****** On appel la fonction précédente
                         notationDesCandidats_NoteCandidat( ncin, nom,  prenom,  note)
                    }
              else
                    {
                        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
                    }
             }
