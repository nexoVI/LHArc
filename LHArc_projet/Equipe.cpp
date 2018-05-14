#include "Equipe.h"
#include <iostream>
Equipe::Equipe(std::string _nom, std::list<std::string> _palmares, short _iD, std::string _lieu)
{
    nom=_nom;
    palmares=_palmares;
    iD=_iD;
    lieu=_lieu;
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
    std::cout<<"-----------------------------"<<std::endl;
    std::cout<<"Nom de l'equipe: "<<nom<<std::endl;
    std::cout<<"iD de l'equipe: "<<iD<<std::endl;
    std::cout<<"Palmares:"<<std::endl;
    for(std::list<std::string>::iterator it1=palmares.begin(); it1!=palmares.end(); ++it1){
    std::cout<<"  -";
    std::cout<<*it1<<std::endl;
    }
    std::cout<<std::endl;
    std::cout<<"Joueurs:"<<std::endl;
    for(std::list<Joueur>::iterator it=joueurs.begin(); it!=joueurs.end(); ++it){
        it->Afficher();
        std::cout<<std::endl;
    }
    std::cout<<"-----------------------------"<<std::endl;
    std::cout<<std::endl;
}
void Equipe::addpalmares(std::string _nom){
    palmares.push_back(_nom);
}

int Equipe::getNbrJoueurs(){
    return joueurs.size();
}
void Equipe::addButJoueur(int numeroJoueur){
    Joueur *it;
    joueurs.begin();
    for (int i=0;i<numeroJoueur;i++){
        *it=joueurs.front();
    }
    it->addBut();
}

std::string Equipe::getLieu(){
    return lieu;
}
