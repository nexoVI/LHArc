#include "Joueur.h"
#include <iostream>
Joueur::Joueur(std::string _nom, int _nombreButs, int _niveauJoueur)
{
    nom=_nom;
    nombreButs=_nombreButs;
    niveauJoueur=_niveauJoueur;
}

Joueur::~Joueur()
{
    //dtor
}

int Joueur::getNiveauJoueur(){
    return niveauJoueur;
}
void Joueur::addBut(){
    nombreButs++;
}
void Joueur::Afficher(){
    std::cout<<"Nom: "<<nom<<<<std::endl<<"Nombre de Buts: "<<nombreButs<<<<std::endl<<"Niveau Joueur: "<<niveauJoueur<<std::endl;
}
