#include "Equipe.h"

Equipe::Equipe(std::string _nom, std::list<std::string> _palmares, short _iD)
{
    nom=_nom;
    palmares=_palmares;
    iD=_iD;
}

Equipe::~Equipe()
{
    //dtor
}

int Equipe::getNiveauEquipe(){
    int sommeNiveauJoueurs = 0;
    for(std::list<Joueur>::iterator it=joueurs.begin(); it!=joueurs.end(); ++it){
        sommeNiveauJoueurs+=it->getNiveauJoueur();
    }
    return sommeNiveauJoueurs/joueurs.size();


}
void Equipe::engager(Joueur _joueur){
    joueurs.push_back(_joueur);
}
void Equipe::afficher(){
}
void Equipe::addpalmares(std::string _nom){
    palmares.push_back(_nom);
}
