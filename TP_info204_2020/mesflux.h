#ifndef MESFLUX_H_INCLUDED
#define MESFLUX_H_INCLUDED

#include <iostream>
#include <fstream>
#include <string>
/* Ces différent flux servent à enregistrer dans des fichier .txt les informations relatives aux candidats
     et auxmatières.*/
     /* Les flux par défaut permettent eux de créer ces fichier et de les titrer*/
void fluxDefautCandidat(std:: string nomConcours);
void fluxDefautMatiere(std:: string nomConcours);
void enregistrerCandidat(std:: string ncin, std:: string nom, std:: string prenom, unsigned int age);
void enregistrerMatiere(std:: string code, unsigned int coef, std:: string libelle);
//...........................
void fluxDefautNote(std:: string nomConcours);
void notationDesCandidats_Matiere(std:: string code, unsigned int coef, std:: string libelle);
void notationDesCandidats_NoteCandidat(std:: string ncin, std:: string nom, std:: string prenom, unsigned int note);

#endif // MESFLUX_H_INCLUDED
