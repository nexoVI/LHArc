#include "Match.h"

Match::Match(std::string _Lieu, Equipe _Hote, Equipe _Invite)
{
    //Constructeur

    Lieu = _Lieu;
    Hote = _Hote;
    Invite = _Invite;

    scoreHote = 0;
    scoreInvite = 0;
    termine = false;
}

Match::~Match()
{
    //Destructeur
}

void Match::jouer()
{
    //Cette methode permet d'effectuer le match

    int chancesHote;
    int chancesInvite;



}
