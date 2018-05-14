#ifndef EQUIPE_H
#define EQUIPE_H

#include "Joueur.h"
#include <string>
#include <list>

class Equipe
{
    public:
        Equipe(std::string _nom, std::list<std::string> _palmares, short _iD, std::string _lieu);
        ~Equipe();
        int getNiveauEquipe();
        void engager(Joueur _joueur);
        void afficher();
        void addpalmares(std::string _nom);
        int getNbrJoueurs();
        void addButJoueur(int numeroJoueur);
        std::string getLieu();

        std::string nom;
        short  iD;
        std::list<std::string>   palmares;

    protected:

    private:
        std::list<Joueur> joueurs;
        std::string lieu;
};

#endif // EQUIPE_H
