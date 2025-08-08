#ifndef CANCDIDAT_H
#define CANCDIDAT_H

#include <string>
#include <vector>

class Cancdidat
{
    public:
        Cancdidat();
          //initialise l'objet en fonction des données entrées par l'utilisateur
        Cancdidat(std::string nCin,std::string nom,std::string prenom,unsigned int age);
                // modifie  la cin du candidat
        void modifierNCinCandidat(std::string nouvelleValeur);
                // modifie  le nom du candidat
        void modifierNomCandidat(std::string nouvelleValeur);
                // modifie  le prénom du candidat
        void modifierPrenomCandidat(std::string nouvelleValeur);
                //modifie l'âge du candidat
        void modifierAgeCandidat(unsigned int nouvelleValeur);
                //permet d'obtenir la ncin du candidat
        std::string getNCinCandidat()const;
                //prélève les notes du candidat dans le tableau des matières
        void noterCandidat();
                //calcul la moyenne du candidat et donne une appréciation en fonction du résultat
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
