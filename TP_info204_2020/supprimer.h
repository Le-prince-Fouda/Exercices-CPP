#ifndef SUPPRIMER_H_INCLUDED
#define SUPPRIMER_H_INCLUDED

#include <string>
#include <vector>
#include "Matiere.h"
#include "Cancdidat.h"
/*Ces fonctions ont pour but de supprimer les donn�es des candidat, mati�re et �valuation dont on leur passe l'identifiant
  (NCIN, code) en param�tre*/
void supprimerCandidat(std:: string& ncin, std:: vector<Cancdidat>& liste);
void supprimerMatiere(std:: string& code, std:: vector<Matiere>& liste1);
void supprimerEvaluation(std:: string& code, std:: vector<Matiere>& liste1);

#endif // SUPPRIMER_H_INCLUDED
