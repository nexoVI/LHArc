#include "Match.h"
#include <stdlib.h>
#include <time.h>
#include "math.h"

Match::Match(std::string _Lieu, Equipe& _Hote, Equipe& _Invite) : Lieu(_Lieu), Hote(_Hote), Invite(_Invite)
{
    //Constructeur

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
    //Cette methode permet d'effectuer le match en calculant les scores de chaque équipe

    srand(time(NULL));

    int niveauEquipeHote = this->Hote.getNiveauEquipe();
    int niveauEquipeInvite = this->Invite.getNiveauEquipe();

    double puissanceEquipeHote = ((double)niveauEquipeHote)/10 - pow((double)niveauEquipeHote, (double)2)/3500; //Plus l'equipe a un bon niveau, plus elle a de chances de marquer des buts
    double puissanceEquipeInvite = ((double)niveauEquipeInvite)/10 - pow((double)niveauEquipeInvite, (double)2)/3500;

    double chanceEquipeHote = ( ((double)(rand() % 100))/100 - 0.4 ) * 7;
    double chanceEquipeInvite = ( ((double)(rand() % 100))/100 - 0.4 ) * 7;

    double faciliteAdversaireHote = log10((double)niveauEquipeHote/(double)niveauEquipeInvite) / log10(6) * 6; //Grande facilite si l'autre equipe a un niveau faible par rapport a celui de cette equipe
    double faciliteAdversaireInvite = log10((double)niveauEquipeInvite/(double)niveauEquipeHote) / log10(6) * 6;
    faciliteAdversaireHote = faciliteAdversaireHote > 0 ? faciliteAdversaireHote : 0; //si plus petit que 0, on met a 0 (plancher a 0)
    faciliteAdversaireInvite = faciliteAdversaireInvite > 0 ? faciliteAdversaireInvite : 0; //si plus petit que 0, on met a 0 (plancher a 0)

    scoreHote = (int)floor((puissanceEquipeHote + chanceEquipeHote + faciliteAdversaireHote)/1.6);
    int scorePartielInvite = (int)floor((puissanceEquipeInvite + chanceEquipeInvite + faciliteAdversaireInvite)/1.6);
    scoreInvite = (int)floor(0.9*(double)scorePartielInvite); //Rajout d'une difficulte pour l'equipe invitee

    termine = true;
}
