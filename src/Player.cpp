#include "Player.hpp"
#include <iostream>

Player create_player() {
  Player joueur;
  std::cout << "Entrez le nom du joueur: \n";
  std::cin>>joueur.name;

  std::cout << "Choisissez votre symbole (X ou O): \n";
  std::cin >> joueur.symbol;
  while (joueur.symbol != 'X' && joueur.symbol != 'O') {
            std::cout << "Symbole invalide. Veuillez choisir X ou O: \n";
            std::cin >> joueur.symbol;
        }
  
return joueur;

}