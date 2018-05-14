#include "Equipe.h"
#include <iostream>
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
    std::cout<<"Palmares:"<<std::endl;
    for(std::list<std::string>::iterator it1=palmares.begin(); it1!=palmares.end(); ++it1){
    std::cout<<*it1<<std::endl;
    }
    std::cout<<std::endl;
    for(std::list<Joueur>::iterator it=joueurs.begin(); it!=joueurs.end(); ++it){
        it->Afficher();
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
}
void Equipe::addpalmares(std::string _nom){
    palmares.push_back(_nom);
}
