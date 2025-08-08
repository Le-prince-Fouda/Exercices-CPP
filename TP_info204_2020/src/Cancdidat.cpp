#include "Cancdidat.h"

using namespace std;

Cancdidat::Cancdidat(): m_nCinCandidat("CIN"), m_nomCandidat("NOM"), m_prenomCandidat("PRENOM"),
            m_ageCandidat(0), m_note(0,0), m_decisionCandidat("APRES EVALUATION")
        {
                        //ctor
        }

Cancdidat::Cancdidat(string nCin,string nom,string prenom,unsigned int age):
            m_nCinCandidat(nCin), m_nomCandidat(nom), m_prenomCandidat(prenom), m_ageCandidat(age),
            m_note(0,0), m_decisionCandidat("APRES EVALUATION")
        {

        }

void Cancdidat::modifierNCinCandidat(string nouvellevaleur)
        {
            m_nCinCandidat = nouvellevaleur;
        }


void Cancdidat::modifierNomCandidat(string nouvellevaleur)
        {
            m_nomCandidat = nouvellevaleur;
        }


void Cancdidat::modifierPrenomCandidat(string nouvellevaleur)
       {
            m_prenomCandidat = nouvellevaleur;
        }


void Cancdidat::modifierAgeCandidat(unsigned int nouvellevaleur)
        {
            m_ageCandidat = nouvellevaleur;
        }

string Cancdidat::getNCinCandidat()const
        {
            return m_nCinCandidat;
        }

Cancdidat::~Cancdidat()
        {
    //dtor
        }
