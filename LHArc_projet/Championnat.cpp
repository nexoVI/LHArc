#include "Championnat.h"

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
        if((*itMJ).getTermine() == true)
        {
        cout << "Lieu   : " << (*itMJ).lieu << endl;
        cout << "Équipe : " << (*itMJ).getHote() << " - " << (*itMJ).getInvite() << endl;
        cout << "Score  : " << (*itMJ).getScoreHote() << (*itMJ).getScoreInvite() << endl;
        }
    }
}

void Championnat::JouerMatch(short t1, short t2)
{

}

void Championnat::Reinitialiser()
{
    listEquipe.clear();
    listMatches.clear();
}
