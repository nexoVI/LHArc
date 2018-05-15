#include <iostream>

using namespace std;

#include "Match.h"
#include "Equipe.h"
#include "Championnat.h"

int main()
{
    //1er Equipe
    Joueur joueur1("Glardon", 0, 99);
    Joueur joueur2("Frantzen", 0, 99);
    Joueur joueur3("Kaufmann", 0, 99);
    Joueur joueur4("Matthey", 0, 96);
    Joueur joueur5("Dias", 0, 25);

    list<string> listPalmares1;

    listPalmares1.push_back("Spengler cup");
    listPalmares1.push_back("Stanley cup");

    Equipe equipe1("He-Arc", listPalmares1, 1, "Campus Arc2");

    equipe1.engager(joueur1);
    equipe1.engager(joueur2);
    equipe1.engager(joueur3);
    equipe1.engager(joueur4);
    equipe1.engager(joueur5);

    //2eme Equipe
    Joueur joueur6("Bera", 0, 93);
    Joueur joueur7("Furrer", 0, 89);
    Joueur joueur8("Bykov", 0, 96);
    Joueur joueur9("Mottet", 0, 85);
    Joueur joueur10("Walser", 0, 84);

    list<string> listPalmares2;

    listPalmares2.push_back("Swiss League");
    listPalmares2.push_back("LNA");

    Equipe equipe2("HC Fribourg-Gotteron", listPalmares2, 2, "Fribourg");

    equipe2.engager(joueur6);
    equipe2.engager(joueur7);
    equipe2.engager(joueur8);
    equipe2.engager(joueur9);
    equipe2.engager(joueur10);

    //3eme Equipe
    Joueur joueur11("DelaFontaine", 0, 50);
    Joueur joueur12("DuGrenier", 0, 51);
    Joueur joueur13("Hute", 0, 52);
    Joueur joueur14("Houblon", 0, 53);
    Joueur joueur15("Rouge", 0, 54);

    list<string> listPalmares3;

    Equipe equipe3("Les pieds nickles", listPalmares3, 3, "BidonVille");

    equipe3.engager(joueur11);
    equipe3.engager(joueur12);
    equipe3.engager(joueur13);
    equipe3.engager(joueur14);
    equipe3.engager(joueur15);

    //4eme Equipe
    Joueur joueur16("DeLaVille", 0, 79);
    Joueur joueur17("DeLaCampagne", 0, 54);
    Joueur joueur18("DuPlateau", 0, 75);
    Joueur joueur19("DuChef", 0, 90);
    Joueur joueur20("DuBoucher", 0, 1);

    list<string> listPalmares4;

    listPalmares4.push_back("Regional Valais cup");

    Equipe equipe4("Les Standards", listPalmares4, 4, "Sierre");

    equipe4.engager(joueur16);
    equipe4.engager(joueur17);
    equipe4.engager(joueur18);
    equipe4.engager(joueur19);
    equipe4.engager(joueur20);

    Championnat tournoi("LHARC");

    tournoi.AjouterEquipe(equipe1);
    tournoi.AjouterEquipe(equipe2);
    tournoi.AjouterEquipe(equipe3);
    tournoi.AjouterEquipe(equipe4);

    cout << "Les equipes participant au championnat sont :" << endl << endl;
    tournoi.AfficherEquipe();

    tournoi.AgenderMatch();

    tournoi.JouerMatch(1,2);
    tournoi.JouerMatch(3,4);
    tournoi.JouerMatch(2,3);
    tournoi.JouerMatch(3,1);
    tournoi.JouerMatch(2,4);
    tournoi.JouerMatch(4,1);

    cout << "Les matchs joues sont : " << endl;
    tournoi.AfficherMatchesJoues();

    tournoi.AfficherEquipe();

    std::cout << std::endl << "Le classement est : " << std::endl << std::endl;
    tournoi.AfficherClassement();

    return 0;
}
