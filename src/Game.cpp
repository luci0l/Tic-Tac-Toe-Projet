#include <iostream>
#include "Board.hpp"
#include "Player.hpp"

void entree(char choix, char joueur)
{
    if(choix=='1' && tictactoe[0][0] =='1')
        tictactoe[0][0] = joueur;
    else if (choix == '2' && tictactoe[0][1] == '2')
        tictactoe[0][1] = joueur;
    else if (choix == '3' && tictactoe[0][2] == '3')
        tictactoe[0][2] = joueur;
    else if (choix == '4' && tictactoe[1][0] == '4')
        tictactoe[1][0] = joueur;
    else if (choix == '5' && tictactoe[1][1] == '5')
        tictactoe[1][1] = joueur;
    else if (choix == '6' && tictactoe[1][2] == '6')
        tictactoe[1][2] = joueur;
    else if (choix == '7' && tictactoe[2][0] == '7')
        tictactoe[2][0] = joueur;
    else if (choix == '8' && tictactoe[2][1] == '8')
        tictactoe[2][1] = joueur;
    else if (choix == '9' && tictactoe[2][2] == '9')
        tictactoe[2][2] = joueur;
    else
    {
        std::cout<<"choix invalide";
        joueur--;
    }
}


char gagnant()
{
    //lignes horizontales

    if (tictactoe[0][0] == tictactoe[0][1] && tictactoe[0][1] == tictactoe[0][2])
        return tictactoe[0][0];
    if (tictactoe[1][0] == tictactoe[1][1] && tictactoe[1][1] == tictactoe[1][2])
        return tictactoe[1][0];
    if (tictactoe[2][0] == tictactoe[2][1] && tictactoe[2][1] == tictactoe[2][2])
        return tictactoe[2][0];

    //lignes verticales
    if (tictactoe[0][0] == tictactoe[1][0] && tictactoe[1][0] == tictactoe[2][0])
        return tictactoe[0][0];
    if (tictactoe[0][1] == tictactoe[1][1] && tictactoe[1][1] == tictactoe[2][1])
        return tictactoe[0][1];
    if (tictactoe[0][2] == tictactoe[1][2] && tictactoe[1][2] == tictactoe[2][2])
        return tictactoe[0][2];

    //diagonales

    if (tictactoe[0][0] == tictactoe[1][1] && tictactoe[1][1] == tictactoe[2][2])
        return tictactoe[0][0];
    if (tictactoe[2][0] == tictactoe[1][1] && tictactoe[1][1] == tictactoe[0][2])
        return tictactoe[2][0];
    
    return '/';

}

char ia_choix(){
   
}

int play_game(){
    char choix;
    int joueur = 1;
    char signe;
    char gagnant_;
    char ia_choix;

    int coups = 0;

do {
    draw_game_board();

    joueur = (joueur % 2) ? 1 : 2;

    std::cout << "Joueur " << joueur << " Selectionner une case : ";
    std::cin >> choix;

    signe = (joueur == 1) ? 'X' : 'O';

    entree(choix, signe);
    coups++;

    gagnant_ = gagnant();

    if (gagnant_ == 'X')
        std::cout << "Le joueur 1 gagne !\n";
    else if (gagnant_ == 'O')
        std::cout << "Le joueur 2 gagne !\n";
    else if (gagnant_ == '/' && coups == 9)
        std::cout << "C'est un match nul\n";

    joueur++;

} while (gagnant_ == '/' && coups < 9);

draw_game_board();

return 0;



}

