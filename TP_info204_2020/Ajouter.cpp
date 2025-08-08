#include "Ajouter.h"

using namespace std;

void AjouterCandidat(vector<Cancdidat>& liste)
        {
            cout<< "entrez les informations du candidat" << endl;
            cout<< "ncin du candidat" << endl;
            string ncin;
             cin >> ncin;
            cout<< "nom du candidat" << endl;
            string nom;
             cin >> nom;
            cout<< "prenom du candidat" << endl;
            string prenom;
             cin >> prenom;
             unsigned int age;
            do
            {
            cout<< "age du candidat" << endl;
            cin >> age;
            if (age > 60 || age < 0)
                {
                  cout<< "l'age du candidat doit etre compris entre 0 et 60 ans" << endl;
                }
            }
            while( age > 60 || age < 0);
            Cancdidat candidat(ncin, nom, prenom, age);
            liste.push_back(candidat);
            enregistrerCandidat(ncin, nom, prenom, age);
        }


void AjouterMatiere(vector<Matiere>& liste1)
        {
             cout<< "entrez les informations sur la matiere" << endl;
            cout<< "libelle de la matiere:" << endl;
            string libelle;
             cin >> libelle;
            cout<< "code de la matiere:" << endl;
            string code;
             cin >> code;
            unsigned int coef;
              do
            {
            cout<< "coefficient de la matiere" << endl;
            cin >> coef;
            if (coef > 10 || coef < 0)
                {
                  cout<< "Le coefficient doit etre compris entre 0 et 10" << endl;
                }
            }
            while( coef > 10 || coef < 0);
            Matiere matiere(code, coef, libelle);
            liste1.push_back(matiere);
            enregistrerMatiere(code, coef, libelle);
        }


void AjouterNote(vector<Cancdidat>& liste2, vector<Matiere>& liste3, vector<Evaluation>& liste4)
        {
            int taille1;
            taille1 = liste2.size();
            for(int i=0; i < taille1; i++)
                {
                   string a;
                   a = liste2[i].getNCinCandidat();
                   cout << "Entrez les notes du candidat: " << a << endl;
                   int taille2;
                   taille2 = liste3.size();
                   for(int i=0; i < taille2; i++)
                       {
                         string b;
                         b = liste3[i].getCode();
                          unsigned int note;
                             do
                                {
                                    cout << "Entrez la note de "<< b << endl;
                                     cin >> note;
                                    if (note > 20 || note < 0)
                                        {
                                          cout<< "La note doit etre comprise entre 0 et 20" << endl;
                                        }
                                 }
                            while( note > 20 || note < 0);
                            Evaluation evalation(note, a, b);
                            evalation.calculNoteCoef(liste3[i]);
                            liste4.push_back(evalation);
                       }

                }
        }
