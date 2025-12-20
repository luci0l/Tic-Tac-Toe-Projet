#include <iostream>
#include "Board.hpp"
#include "Player.hpp"



void move_ia(Board& tictactoe_board, char ia_symbol){
  int choix_ia;
  do {
    choix_ia = rand() % 9 + 1;
  } while (!tictactoe_board.case_vide(choix_ia));

  std::cout << "L'IA choisit la case : " << choix_ia << std::endl;
  tictactoe_board.entree(choix_ia, ia_symbol);
  tictactoe_board.draw_game_board();
}




void move(Player joueur, Board& tictactoe_board){

  int choix;
  std::cout << joueur.name << " selectionnez une case : ";
  std::cin >> choix;

  while ((choix < 1 || choix > 9) || std::cin.fail() || !tictactoe_board.case_vide(choix)  ){

    if (std::cin.fail()){
      std::cin.clear();
      std::cin.ignore(255, '\n');
      std::cout << "Erreur. Selectionnez une case: ";
    }
    else if (choix <1 || choix >9){
      std::cout <<"Choix invalide. Selectionnez une case valide. : ";
    }

    else if (!tictactoe_board.case_vide(choix)){
      std::cout<<"La case est déja prise. Choisissez en une autre : ";
    }

    std::cin >> choix;
  }

  tictactoe_board.entree(choix, joueur.symbol);
  tictactoe_board.draw_game_board();

}


int play_game(Player joueur1, Player joueur2){
    int choix;
    int joueur = 1;
    char ia_choix;

    int coups = 0;
    Board tictactoe_board;
    tictactoe_board.create_board();
    tictactoe_board.draw_game_board();
  

while (coups < 9) {
    
    
    move(joueur1, tictactoe_board);
    coups++;
     if (tictactoe_board.gagner(joueur1.symbol)){
      std::cout<<"Le joueur "<<joueur1.name<<"gagne \n";
    return 0; 
     }
     if (coups== 9) {
      std::cout<<"Match Nul \n";
      return 0;
     }
     move(joueur2, tictactoe_board);
     coups++;
     if(tictactoe_board.gagner(joueur2.symbol)){
      std::cout<<"Le joueur "<<joueur2.name<<"gagner \n";
      return 0;
     }
      
    }


tictactoe_board.draw_game_board();

return 0;


}

