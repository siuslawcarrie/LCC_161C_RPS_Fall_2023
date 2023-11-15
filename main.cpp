#include <iostream>
#include "rps_functions.h"
#include "rps_functions.cpp"

using namespace std;

int main(){
    char player_move;
    char computer_move;
    int player_score;
    int computer_score;
    int tie_score;
   display_instructions();
    do {
        player_move = playerMoveFunc();
        computer_move = computer_move_func();
        determine_winner(player_move, computer_move, player_score, computer_score, tie_score);
    } while (get_do_again());

    return 0;
}