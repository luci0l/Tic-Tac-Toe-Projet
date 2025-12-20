#pragma once 
#include <array>

struct Board{
  std::array<std::array< char, 3>, 3> tictactoe{};
void draw_game_board();
void create_board();
std::array<int, 2> convert_choix(int choix);
bool case_vide(int choix);
void entree(int choix, char joueur);
bool gagner(char symbol);

}; 