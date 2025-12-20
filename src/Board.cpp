#include <iostream>
#include "Board.hpp"
#include <array>

void Board::create_board(){
  tictactoe = {{
    {' ',' ',' '},
    {' ',' ',' '},
    {' ',' ',' '}
}};
  
}
void Board::draw_game_board(){

    for(int i = 0; i<3; i++)
    {
      std::cout <<" | ";
        for(int j = 0; j<3; j++)
        {
            std::cout << tictactoe[i][j]<<" | ";
        }
        std::cout<< std::endl;
    }
}

std::array<int, 2> Board::convert_choix(int choix)
{ std::array<int, 2> position0; 

  position0[0] = (choix-1)/3; // ligne
  position0[1] = (choix-1)%3; // colonne

  return position0; 
}

void Board::entree(int choix, char symbol)
{
  std::array<int, 2> position= convert_choix(choix);

  tictactoe [position[0]][position[1] ]= symbol;
  
}

bool Board::case_vide(int choix){
  std::array<int, 2> position= convert_choix(choix);

  if (tictactoe [position[0]][position[1] ]== ' '){
    return true;
  }
  else {
    return false;
  }

}


bool Board::gagner(char symbol){
  for (int i =0; i<3; i++){
    if (tictactoe[i][0] == tictactoe[i][1] && tictactoe[i][1] == tictactoe[i][2] && tictactoe[i][0] == symbol){ //lignes
      return true;
    }
    if (tictactoe[0][i]== tictactoe[1][i] && tictactoe[1][i] == tictactoe[2][i] && tictactoe[0][i] == symbol) //colonnes
    return true;
  }

   if (tictactoe[0][0] == tictactoe[1][1] && tictactoe[1][1] == tictactoe[2][2] &&tictactoe[0][0] == symbol) //diagonales
        return true;
    if (tictactoe[2][0] == tictactoe[1][1] && tictactoe[1][1] == tictactoe[0][2] && tictactoe[2][0]== symbol)
        return true;
    
  return false; 
}




