#include <iostream>

using namespace std;

#ifndef WEEK8_SEPARATE_COMPILATION_RPS_FUNCTIONS_HPP
#define WEEK8_SEPARATE_COMPILATION_RPS_FUNCTIONS_HPP
void display_instructions();

char player_move_func();

char computer_move_func();

bool get_do_again();

void determine_winner(char player_move, char computer_move, int &player_score, int &computer_score, int &tie_score);


#endif//WEEK8_SEPARATE_COMPILATION_RPS_FUNCTIONS_HPP
