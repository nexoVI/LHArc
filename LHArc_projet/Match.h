/* LHArc - Ice Hockey Championship Simulator
 * HE-Arc Ingenierie
 * 24.04.2018
 * Valerian Glardon
 */

#ifndef MATCH_H
#define MATCH_H

#include "Equipe.h"
#include <string>

class Match
{
    public:
        //Constructeurs, destructeurs
        Match(std::string _Lieu, Equipe _Hote, Equipe _Invite);
        ~Match();

        //Methodes publiques
        const int getScoreHote() {return scoreHote;}
        const int getScoreInvite() {return scoreInvite;}
        const bool isTermine() {return termine;}

        void jouer();

        //Attributs
        std::string Lieu;
        Equipe Hote;
        Equipe Invite;

    protected:

    private:

        //Attributs
        int scoreHote;
        int scoreInvite;
        bool termine;
};

#endif // MATCH_H
