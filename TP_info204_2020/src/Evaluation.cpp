#include "Evaluation.h"

using namespace std;

Evaluation::Evaluation(): m_note(0), m_noteCoef(0), m_ncin(0), m_code(0)
    {
        //ctor
    }


Evaluation::Evaluation(unsigned int note, string ncin, string code): m_note(note), m_noteCoef(0), m_ncin(ncin), m_code(code)
    {

    }


 void Evaluation::calculNoteCoef(Matiere& matiere)
    {
        m_noteCoef = m_note * matiere.getCoef();
    }



unsigned int Evaluation::getNoteCoef()const
    {
        return m_noteCoef;
    }

Evaluation::~Evaluation()
{
    //dtor
}
