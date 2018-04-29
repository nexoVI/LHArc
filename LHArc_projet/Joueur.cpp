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
    std::cout<<"Nom: "<<nom<<"Nombre de Buts: "<<nombreButs<<"Niveau Joueur"<<niveauJoueur<<std::endl;
}
