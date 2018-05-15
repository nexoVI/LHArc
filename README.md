# LHArc
Simulateur de championnat de Hockey

## Description
LHArc est un "simulateur" de championnat de hockey. Le simulateur permet de créer un championnat avec un certain nombre d'équipe avec au moins 5 joueurs, de faire jouer toutes les équipes l'une contre l'autre (toute les combinaisons possible, sauf contre elle-même), et enfin d'afficher le classement avec le score des différentes équipes.

## Utilisation
### Installation
Ce projet est développé avec **CodeBlocks**. 
Pour l'utiliser:
1. Récupérer le projet en local via un "git clone"
2. Dans le dossier "LHArc_projet" se trouve le projet CodeBlocks "LHArc_projet.cbp" à ouvrir avec CodeBlocks.
3. Il est ensuite possible de:
   a. Modifier le "main.c" pour configurer un championnat
   b. Builder pour en faire un exécutable.

:information_source: Les exécutables se trouvent dans le dossier "LHArc_projet\bin\Debug"

### Simulation championnat
Voici un résumé de la marche à suivre pour jouer un championnat:
1. Instancier des "Joueur".
2. Instancier des "Equipe", et y ajouter les "Joueur" instanciés.
3. Instancier un "Championnat", et y ajouter les "Equipes".
Voir ensuite dans le wiki, **Aperçu des classes V1 - Classe "Championnat"** pour l'utilisation du "Championnat".
