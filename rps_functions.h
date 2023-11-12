#include <iostream>

using namespace std;

#ifndef WEEK8_SEPARATE_COMPILATION_RPS_FUNCTIONS_HPP
#define WEEK8_SEPARATE_COMPILATION_RPS_FUNCTIONS_HPP
void display_instructions();

char player_move();

char computer_move();

char get_do_again();

void determine_winner(char player_move, char computer_move, int &player_score, int &computer_score, int &tie_score);

//function display instructions
void display_instructions()
{
    cout << "Welcome to the game of rock, paper, scissors. To play, each participant at the same time chooses ";
    cout << "rock, paper, or scissors. ";
    cout << "The winner is determined thusly: scissors cut paper, paper covers rock or rock smashes scissors." << endl;
}

//function get player move
char player_move()
{
    char player_move;

    do
    {
        cout << "Please enter r for rock, p for  `paper, s for scissors: " << endl;
        cin >> player_move;
        // clear any error flags on input
        cin.clear();
        // flush the buffer
        cin.ignore(100, '\n');
        player_move = tolower(player_move);
        if (player_move != 'r' && player_move != 'p' && player_move != 's')
            cout << "Sorry, that's not a valid entry. Please enter r for rock, p for  `paper, s for scissors: " << endl;
    } while (player_move != 'r' && player_move != 'p' && player_move != 's');
    return player_move;
}
//function get computer move

char computer_move()
{
    int computer_move = rand() % 3 + 1;
    if (computer_move == 1)
    {
        return 'r';
    } else if (computer_move == 2)
    {
        return 'p';
    } else
    {
        return 's';
    }
}

//function play again
char get_do_again()
{
    char playAgain;
    do
    {
        cout << "Do you want to play again? Enter y for yes or n for no ";
        cin >> playAgain;
        // clear any error flags on input
        cin.clear();
        // flush the buffer
        cin.ignore(100, '\n');
        playAgain = tolower(playAgain);
        if (playAgain != 'y' && playAgain != 'n')
            cout << "Sorry, that's not a valid entry. Please enter y or n\n";
    } while (playAgain != 'y' && playAgain != 'n');
    cout << endl;

    return playAgain;
}

//winner function
void determine_winner(char player_move, char computer_move, int &player_score, int &computer_score
        , int &tie_score)
{
    if (player_move == 'r' && computer_move == 'p')
    {
        cout << "Player chose " << player_move << endl;
        cout << "Computer chose " << computer_move << endl;
        cout << "Computer wins!" << endl;
        computer_score++;
    } else if (player_move == 'r' && computer_move == 's')
    {
        cout << "Player chose " << player_move << endl;
        cout << "Computer chose " << computer_move << endl;
        cout << " Player wins!" << endl;
        player_score++;
    } else if (player_move == 'p' && computer_move == 'r')
    {
        cout << "Player chose " << player_move << endl;
        cout << "Computer chose " << computer_move << endl;
        cout << "Player wins! " << endl;
        player_score++;
    } else if (player_move == 'p' && computer_move == 's')
    {
        cout << "Player chose " << player_move << endl;
        cout << "Computer chose " << computer_move << endl;
        cout << "Computer wins!" << endl;
        computer_score++;
    } else if (player_move == 's' && computer_move == 'r')
    {
        cout << "Player chose " << player_move << endl;
        cout << "Computer chose " << computer_move << endl;
        cout << "Computer wins!" << endl;
        computer_score++;
    } else if (player_move == 's' && computer_move == 'p')
    {
        cout << "Player chose " << player_move << endl;
        cout << "Computer chose " << computer_move << endl;
        cout << "Player wins!" << endl;
        player_score++;
    } else
    {
        cout << "Player chose " << player_move << endl;
        cout << "Computer chose " << computer_move << endl;
        cout << "Tie!" << endl;
        tie_score++;
    }

#endif //WEEK8_SEPARATE_COMPILATION_RPS_FUNCTIONS_HPP