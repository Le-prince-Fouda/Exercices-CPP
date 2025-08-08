#ifndef CANCDIDAT_H
#define CANCDIDAT_H

#include <string>
#include <vector>

class Cancdidat
{
    public:
        Cancdidat();
          //initialise l'objet en fonction des donn�es entr�es par l'utilisateur
        Cancdidat(std::string nCin,std::string nom,std::string prenom,unsigned int age);
                // modifie  la cin du candidat
        void modifierNCinCandidat(std::string nouvelleValeur);
                // modifie  le nom du candidat
        void modifierNomCandidat(std::string nouvelleValeur);
                // modifie  le pr�nom du candidat
        void modifierPrenomCandidat(std::string nouvelleValeur);
                //modifie l'�ge du candidat
        void modifierAgeCandidat(unsigned int nouvelleValeur);
                //permet d'obtenir la ncin du candidat
        std::string getNCinCandidat()const;
                //pr�l�ve les notes du candidat dans le tableau des mati�res
        void noterCandidat();
                //calcul la moyenne du candidat et donne une appr�ciation en fonction du r�sultat
        void calculDecision();
                //destructeur: permet de supprimer un candidat
        virtual ~Cancdidat();

    protected:
 std::string m_nCinCandidat;
 std::string m_nomCandidat;
 std::string m_prenomCandidat;
 unsigned int m_ageCandidat;
 std::vector<unsigned int> m_note;
 std::string m_decisionCandidat;


    private:
};

#endif // CANCDIDAT_H
