#ifndef JOUEUR_H
#define JOUEUR_H

#include <string>
class Joueur
{
    public:
        Joueur(std::string _nom, int _nombreButs, int _niveauJoueur);
        ~Joueur();
        int getNiveauJoueur();
        void addBut();
        void Afficher();


    protected:

    private:
        std::string nom;
        int nombreButs;
        int niveauJoueur;
};

#endif // JOUEUR_H
