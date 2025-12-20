#include "Menu.hpp"
#include <iostream>

int Menu(){
  int mode;
    std::cout << "Bienvenue dans le jeu du Tic Tac Toe !\n";
    std::cout<< "Veuillez choisir un mode de jeu : \n";
    std::cout<< "Taper 1 pour le mode 2 joueurs \n";
    std::cout<< "Taper 2 pour le mode vs IA \n";
    std::cin>> mode;
    std::cout << "Vous avez choisi le mode " << mode << "\n";
    return mode;
}