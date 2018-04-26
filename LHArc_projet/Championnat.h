#ifndef CHAMPIONNAT_H
#define CHAMPIONNAT_H

#include <list>
#include <string>
#include "Equipe.h"
#include "Match.h"

using namespace std;

class Championnat
{
    public:
        Championnat(string nom);
        ~Championnat();

        void AjouterEquipe(Equipe);
        void AgenderMatch(Match);
        void JouerMatch(short t1, short t2);
        void Reinitialiser();
        void AfficherEquipe();
        void AfficherMatchesJoues();

    protected:

    private:
        string nom;
        list<Match> listMatches;
        list<Equipe> listEquipe;

};

#endif // CHAMPIONNAT_H
