#include <iostream>
#include "Board.hpp"

char tictactoe[3][3] = {
    {'1','2','3'},
    {'4','5','6'},
    {'7','8','9'}
};

void draw_game_board(){

    for(int i = 0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            std::cout << tictactoe[i][j]<<" | ";
        }
        std::cout<< std::endl;
    }


}


