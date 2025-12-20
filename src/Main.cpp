#include <iostream>
#include <string>
#include "Player.hpp"
#include "Board.hpp"
#include "Game.hpp"
#include "Menu.hpp"

int main() {
    int mode = Menu();

    Player joueur1 = create_player();

    Player joueur2;
    
    if (mode == 1) {
        joueur2 = create_player();

        while (joueur2.symbol == joueur1.symbol) {
            std::cout << "Ce symbole est pris par " << joueur1.name << ". Choisissez un autre symbole : ";
            std::cin >> joueur2.symbol;
    }  
}
    else {
        joueur2.name = "IA";
        joueur2.symbol = (joueur1.symbol == 'X') ? 'O' : 'X';
    }

    std::cout << "Le joueur 1 est " << joueur1.name << " avec le symbole " << joueur1.symbol << std::endl;
    std::cout << "Le joueur 2 est " << joueur2.name << " avec le symbole " << joueur2.symbol << std::endl;

    play_game(joueur1, joueur2);

    return 0;
}




