#ifndef EVALUATION_H
#define EVALUATION_H

#include <iostream>
#include <string>
#include <vector>
#include "Cancdidat.h"
#include "Matiere.h"

class Evaluation
{
    public:
        Evaluation();
        Evaluation(unsigned int note,std:: string ncin, std:: string code);
          //calcul la note coefficiee du candidat
        void calculNoteCoef(Matiere& matiere);
            //permet d'obtenir la note coef
        unsigned int getNoteCoef()const;
        virtual ~Evaluation();

    protected:
        unsigned int m_note;
        unsigned int m_noteCoef;
        std:: string m_ncin;
        std:: string m_code;
    private:
};

#endif // EVALUATION_H
