#include "Matiere.h"

using namespace std;

Matiere::Matiere():m_code("code"), m_coef(0), m_libelle("matiere")
        {
                //ctor
        }

Matiere::Matiere( string code, unsigned int coef, string libelle): m_code(code), m_coef(coef), m_libelle(libelle)
        {

        }

string Matiere::getCode()const
        {
            return m_code;
        }

unsigned int Matiere::getCoef()const
        {
            return m_coef;
        }


Matiere::~Matiere()
        {
                //dtor
        }
