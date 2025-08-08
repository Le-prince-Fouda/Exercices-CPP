#ifndef MATIERE_H
#define MATIERE_H

#include <string>
class Matiere
{
    public:
                //constructeur par défaut
        Matiere();
                //constructeur surchargé permettant d'initialiser les données selon les entrées de l'utilisateur
        Matiere(std::string code, unsigned int coef, std::string libelle);
                //renvoie le code de la matière
        std::string getCode() const;
                //renvoie le coef de la matière
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
