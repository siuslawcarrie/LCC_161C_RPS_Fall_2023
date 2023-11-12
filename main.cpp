#include <iostream>
#include "rps_functions.h"

using namespace std;

int main(){
    char player_move;
    char computer_move;
    int player_score;
    int computer_score;
    int tie_score;
    display_instructions();
    player_move = player_move();
    computer_move = computer_move();
    determine_winner(player_move, computer_move, &player_score, computer_score, &tie_score);
    char get_do_again();

    return 0;
}