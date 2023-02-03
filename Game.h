//
// Created by riwaa on 3-2-2023.
//

#ifndef TIC_TAC_TOE_GAME_H
#define TIC_TAC_TOE_GAME_H
#include <iostream>
#include <string>
using namespace std;
class Game {
private:
    //Input variables
    int row_player_one,column_player_one;
    int row_player_two,column_player_two;
    string player_one,player_two;
    string player_one_name, player_two_name;
    //switch case for turns
    int counter;
    // representation of the board by using array of dimension 3x3
    string arr_board[3][3];
public:
    Game();
    // Draw the playboard
    void initboard();
    // Initialize the two chars for the 2 players
    void getchoice();
    //Main game loop
    void maingameloop();
    // check for a winner
    bool victory(int turn);
    // check for a draw
    bool draw (int counter) ;
};


#endif //TIC_TAC_TOE_GAME_H
