#include "Championnat.h"
#include <iostream>

// OLA CEST HYPER FUN !
using namespace std;

Championnat::Championnat(string nom)
{
    this->nom = nom;
}

Championnat::~Championnat()
{
 //dstr
}

void Championnat::AjouterEquipe(Equipe equipe)
{
    listEquipe.push_front(equipe);
}

void Championnat::AgenderMatch(Match match)
{
    listMatches.push_front(match);
}

void Championnat::AfficherEquipe()
{
    list<Equipe>::iterator itE;

    for(itE = listEquipe.begin(); itE != listEquipe.end();itE++)
    {
        (*itE).afficher();
    }
}

void Championnat::AfficherMatchesJoues()
{
    list<Match>::iterator itMJ;
    for(itMJ=listMatches.begin(); itMJ!=listMatches.end();itMJ++)
    {
        if((*itMJ).isTermine() == true)
        {
        cout << endl;
        cout << "********************************************************************" << endl;
        cout << endl;
        cout << "Lieu   : " << (*itMJ).Lieu << endl;
        cout << "Equipe : " << (*itMJ).Hote.nom << " - " << (*itMJ).Invite.nom << endl;
        cout << "Score  : " << (*itMJ).getScoreHote() << " - " << (*itMJ).getScoreInvite() << endl;
        }
    }
}

void Championnat::JouerMatch(short t1, short t2)
{
    list<Match>::iterator itM;

    for(itM=listMatches.begin();itM!=listMatches.end();itM++)
    {
        if((t1==(*itM).Hote.iD) && (t2==(*itM).Invite.iD))
        {
        (*itM).jouer();
        while(!(*itM).isTermine());
        }
    }
}

void Championnat::Reinitialiser()
{
    listEquipe.clear();
    listMatches.clear();
}
