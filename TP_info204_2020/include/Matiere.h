#ifndef MATIERE_H
#define MATIERE_H

#include <string>
class Matiere
{
    public:
                //constructeur par d�faut
        Matiere();
                //constructeur surcharg� permettant d'initialiser les donn�es selon les entr�es de l'utilisateur
        Matiere(std::string code, unsigned int coef, std::string libelle);
                //renvoie le code de la mati�re
        std::string getCode() const;
                //renvoie le coef de la mati�re
        unsigned int getCoef() const;
            //destructeur
        virtual ~Matiere();

    protected:
        std::string m_code;
        std::string m_libelle;
        unsigned int m_coef;

    private:
};

#endif // MATIERE_H
