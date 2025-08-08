/*INF204: POO
Nom: FOUDA AMBASSA Francky Audrey
Matricule: 18T2457
Binôme: OMGBWA NGUEM Bayard Kudy */

#include <iostream>
#include <string>
#include <vector>
#include "Cancdidat.h"
#include "Matiere.h"
#include "Evaluation.h"
#include "Ajouter.h"
#include "mesflux.h"
#include "supprimer.h"

using namespace std;

int main()
{
    // Identification du concours
        cout << "Entrer le nom du concours:" << endl;
        string nomConcours;
        cin >> nomConcours;
        cout << endl << "Bienvenu au concours de " << nomConcours << endl;

    // Lister les matières et leurs caractéristiques
        cout << endl <<"Entrer les differentes matiere du concours et leurs caracteristiques" << endl << endl;
        vector<Matiere>listeMatiere;
        fluxDefautMatiere(nomConcours);
        int choix;
        int i(0); //Compteur de matières
        do
            {
               AjouterMatiere(listeMatiere);
               cout << "voulez vous faire un nouvel enregistrement matiere? taper \"1\" si oui ou \"2\" sinon"  << endl;
               cin >> choix;
                i++;
            }
        while(choix == 1);
        cout << "Nous avons: "<< i << " matiere(s)"<<endl;


    //Enregistrement des candidats
        cout << endl << "Enregistrons les candidats" << endl << endl;
        vector<Cancdidat>listeCandidat;
        fluxDefautCandidat(nomConcours);
        int compteur(0);
        do
            {
              AjouterCandidat(listeCandidat);
                cout << "voulez vous enregistrer un nouveau candidat? taper \"1\" si oui ou \"2\" sinon"  << endl;
               cin >> choix;
                compteur++;
            }
        while(choix == 1);
        cout << "Nous avons: "<< compteur << " candidat(s)"<<endl;


    //Attribution des notes aux candidats
        cout << endl << "Attribuons des notes aux candidats" <<endl <<endl;
        vector<Evaluation> listeNote;
              AjouterNote(listeCandidat, listeMatiere, listeNote);





    return 0;
}
