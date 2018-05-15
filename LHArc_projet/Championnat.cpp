#include "Championnat.h"
#include <iostream>
#include <string>

using namespace std;

Championnat::Championnat(string nom)
{
    this->nom = nom;
}

Championnat::~Championnat()
{
//    list<Match>::iterator itM;
//    for(itM=listMatches.begin();itM!=listMatches.end(); itM++)
//    {
//        delete listMatches.pop_front(*itM);
//    }
}

void Championnat::AjouterEquipe(Equipe equipe)
{
    listEquipe.push_front(equipe);
}

void Championnat::AgenderMatch()
{
    list<Equipe>::iterator iti;
    list<Equipe>::iterator itj;

    for(iti=listEquipe.begin(); iti != --listEquipe.end(); iti++)
    {
        for(itj=iti; itj != --listEquipe.end();)
        {
            itj++;
            listMatches.push_back(Match(iti->getLieu(), (*iti), (*itj)));
        }
    }
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
        cout << "********************************************" << endl;
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
        if(((t1==(*itM).Hote.iD) && (t2==(*itM).Invite.iD)) || ((t2==(*itM).Hote.iD) && (t1==(*itM).Invite.iD)))
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

void Championnat::AfficherClassement()
{
    int classement[listEquipe.size()];

    list<Equipe>::iterator it;
    list<Match>::iterator itm;
    int i;
    for(it = listEquipe.begin(), i=0; it != listEquipe.end(); it++, i++)
    {
        classement[i] = 0;
        for(itm = listMatches.begin(); itm != listMatches.end(); itm++)
        {
            if(it->iD == itm->Hote.iD)
            {
                if(itm->getScoreHote() > itm->getScoreInvite())
                {
                classement[i] += 3;
                }
                else if(itm->getScoreHote() == itm->getScoreInvite())
                {
                classement[i] += 1;
                }
            }
            else if(it->iD == itm->Invite.iD)
            {
                if(itm->getScoreInvite() > itm->getScoreHote())
                {
                classement[i] += 3;
                }
                else if(itm->getScoreInvite() == itm->getScoreHote())
                {
                classement[i] += 1;
                }
            }
        }
    }

    int _max = -1;
    int indexMax = -1;
    for(unsigned int j=0; j<listEquipe.size(); j++)
    {
        unsigned int k=0;
        _max = -1;
        for(; k<listEquipe.size(); k++)
        {
            if(classement[k] > _max)
            {
                _max = classement[k];
                indexMax = k;
            }
        }

        list<Equipe>::iterator ite=listEquipe.begin();
        for(int l=0; l<indexMax; ite++, l++)  {}

        std::cout << " " << j+1 << ": " << ite->nom << "; score : " << classement[indexMax] << std::endl;
        classement[indexMax] = -1;
        cout << "********************************************" << endl;
    }
}
