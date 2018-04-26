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

}

void Championnat::AfficherMatchesJoues()
{

}

void Championnat::JouerMatch(short t1, short t2)
{

}

void Championnat::Reinitialiser()
{
    listEquipe.clear();
    listMatches.clear();
}
