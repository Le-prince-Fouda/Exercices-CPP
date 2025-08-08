#ifndef AJOUTER_H_INCLUDED
#define AJOUTER_H_INCLUDED

#include <iostream>
#include <string>
#include <vector>
#include "Matiere.h"
#include "Cancdidat.h"
#include "Evaluation.h"
#include "mesflux.h"

void AjouterCandidat(std::vector<Cancdidat>& liste);
void AjouterMatiere(std::vector<Matiere>& liste1);
void AjouterNote(std::vector<Cancdidat>& liste2, std::vector<Matiere>& liste3, std::vector<Evaluation>& liste4);



#endif // AJOUTER_H_INCLUDED
