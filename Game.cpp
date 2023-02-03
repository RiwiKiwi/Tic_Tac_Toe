//
// Created by riwaa on 3-2-2023.
//
#include "Game.h"
#include <iostream>
using namespace std;
//Constructor
Game::Game() {}

bool Game::draw(int counter) {
    /*
     * ASSIGN IF DRAW
     */
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            //check if the board is full with playing chars
            if (arr_board[i][j] == "O" || arr_board[i][j] == "X"){
                continue;
            }else{
                // if not there  is no chance for draw
                return false;
            }
        }
    }
    if (!victory(counter)&&!victory(counter+1)){
        return true;
    }else{
        return false;
    }
}
bool Game::victory(int turn) {
    /*
     * HARDCODED (CHECKING EVERY TILE ONE BY ONE FOR THAT SPECIFIC PLAYER
     */
    //CHECKING FOR PLAYER ONE
    if (turn % 2 == 0){
        if (arr_board[0][0] == player_one){
            // 00 and 01 and 02
            if (arr_board[0][0] == arr_board[0][1] && arr_board[0][1] == arr_board[0][2] && arr_board[0][0] == arr_board[0][2]){
                return true;
            }else{
                // 00 and 10 and 20
                if (arr_board[0][0] == arr_board[1][0] && arr_board[1][0] == arr_board[2][0] && arr_board[0][0] == arr_board[2][0]){
                    return true;
                }
                // 00 and 11 and 22
                if (arr_board[0][0] == arr_board[1][1] && arr_board[1][1] == arr_board[2][2] && arr_board[0][0] == arr_board[2][2]){
                    return true;
                }
            }
        }
        if (arr_board[0][1] == player_one){
            // 00 and 01 and 02
            if (arr_board[0][0] == arr_board[0][1] && arr_board[0][1] == arr_board[0][2] && arr_board[0][0] == arr_board[0][2]){
                return true;
            }else{
                // 01 and 11 and 21
                if (arr_board[0][1] == arr_board[1][1] && arr_board[1][1] == arr_board[2][1] && arr_board[0][1] == arr_board[2][1]){
                    return true;
                }
            }
        }
        if (arr_board[0][2] == player_one){
            // 00 and 01 and 02
            if (arr_board[0][0] == arr_board[0][1] && arr_board[0][1] == arr_board[0][2] && arr_board[0][0] == arr_board[0][2]){
                return true;
            }else{
                //02 and 12 and 22
                if (arr_board[0][2] == arr_board[1][2] && arr_board[1][2] == arr_board[2][2] && arr_board[0][2] == arr_board[2][2]){
                    return true;
                }
                // 02 and 11 and 20
                if (arr_board[0][2] == arr_board[1][1] && arr_board[1][1] == arr_board[2][0] && arr_board[0][2] == arr_board[2][0]){
                    return true;
                }
            }
        }
        if (arr_board[1][0] == player_one){
            //00 and 10 and 20
            if (arr_board[0][0] == arr_board[1][0] && arr_board[1][0] == arr_board[2][0] && arr_board[0][0] == arr_board[2][0]){
                return true;
            }else{
                // 10 and 11 and 20
                if(arr_board[1][0] == arr_board[1][1]&& arr_board[1][1] == arr_board[1][2] && arr_board[1][0] == arr_board[1][2]){
                    return true;
                }
            }
        }
        if (arr_board[1][1] == player_one){
            // 01 and 11 and 21
            if (arr_board[0][1] == arr_board[1][1] && arr_board[1][1] == arr_board[2][1] && arr_board[0][1] == arr_board[2][1]){
                return true;
            }
            // 10 and 11 and 12
            if(arr_board[1][0] == arr_board[1][1]&& arr_board[1][1] == arr_board[1][2] && arr_board[1][0] == arr_board[1][2]){
                return true;
            }
            //diagonal down: 00 and 11 and 22
            if (arr_board[0][0] == arr_board[1][1] && arr_board[1][1] == arr_board[2][2] && arr_board[0][0] == arr_board[2][2]){
                return true;
            }
            // diagonal up : 20 and 11 and 02
            if (arr_board[0][2] == arr_board[1][1] && arr_board[1][1] == arr_board[2][0] && arr_board[0][2] == arr_board[2][0]){
                return true;
            }
        }
        if (arr_board[1][2] == player_one){
            if (arr_board[0][2] == arr_board[1][2] && arr_board[1][2] == arr_board[2][2] && arr_board[0][2] == arr_board[2][2]){
                return true;
            }
            if(arr_board[1][0] == arr_board[1][1]&& arr_board[1][1] == arr_board[1][2] && arr_board[1][0] == arr_board[1][2]){
                return true;
            }
        }
        if (arr_board[2][0] == player_one){
            if (arr_board[0][0] == arr_board[1][0] && arr_board[1][0] == arr_board[2][0] && arr_board[0][0] == arr_board[2][0]){
                return true;
            }
            if (arr_board[0][2] == arr_board[1][1] && arr_board[1][1] == arr_board[2][0] && arr_board[0][2] == arr_board[2][0]){
                return true;
            }
            if (arr_board[2][0] == arr_board[2][1] && arr_board[2][1] == arr_board[2][2] && arr_board[2][0] == arr_board[2][2]){
                return true;
            }
        }
        if (arr_board[2][1] == player_one){
            if (arr_board[0][1] == arr_board[1][1] && arr_board[1][1] == arr_board[2][1] && arr_board[0][1] == arr_board[2][1]){
                return true;
            }
            if (arr_board[2][0] == arr_board[2][1] && arr_board[2][1] == arr_board[2][2] && arr_board[2][0] == arr_board[2][2]){
                return true;
            }
        }
        if (arr_board[2][2] == player_one){
            if (arr_board[0][0] == arr_board[1][1] && arr_board[1][1] == arr_board[2][2] && arr_board[0][0] == arr_board[2][2]){
                return true;
            }
            if (arr_board[0][2] == arr_board[1][2] && arr_board[1][2] == arr_board[2][2] && arr_board[0][2] == arr_board[2][2]){
                return true;
            }
            if (arr_board[2][0] == arr_board[2][1] && arr_board[2][1] == arr_board[2][2] && arr_board[2][0] == arr_board[2][2]){
                return true;
            }
        }
    }
    //CHECKING FOR PLAYER TWO
    else if (turn % 2 != 0){
        if (arr_board[0][0] == player_two){
            // 00 and 01 and 02
            if (arr_board[0][0] == arr_board[0][1] && arr_board[0][1] == arr_board[0][2] && arr_board[0][0] == arr_board[0][2]){
                return true;
            }else{
                // 00 and 10 and 20
                if (arr_board[0][0] == arr_board[1][0] && arr_board[1][0] == arr_board[2][0] && arr_board[0][0] == arr_board[2][0]){
                    return true;
                }
                // 00 and 11 and 22
                if (arr_board[0][0] == arr_board[1][1] && arr_board[1][1] == arr_board[2][2] && arr_board[0][0] == arr_board[2][2]){
                    return true;
                }
            }
        }
        if (arr_board[0][1] == player_two){
            // 00 and 01 and 02
            if (arr_board[0][0] == arr_board[0][1] && arr_board[0][1] == arr_board[0][2] && arr_board[0][0] == arr_board[0][2]){
                return true;
            }else{
                // 01 and 11 and 21
                if (arr_board[0][1] == arr_board[1][1] && arr_board[1][1] == arr_board[2][1] && arr_board[0][1] == arr_board[2][1]){
                    return true;
                }
            }
        }
        if (arr_board[0][2] == player_two){
            // 00 and 01 and 02
            if (arr_board[0][0] == arr_board[0][1] && arr_board[0][1] == arr_board[0][2] && arr_board[0][0] == arr_board[0][2]){
                return true;
            }else{
                //02 and 12 and 22
                if (arr_board[0][2] == arr_board[1][2] && arr_board[1][2] == arr_board[2][2] && arr_board[0][2] == arr_board[2][2]){
                    return true;
                }
                // 02 and 11 and 20
                if (arr_board[0][2] == arr_board[1][1] && arr_board[1][1] == arr_board[2][0] && arr_board[0][2] == arr_board[2][0]){
                    return true;
                }
            }
        }
        if (arr_board[1][0] == player_two){
            //00 and 10 and 20
            if (arr_board[0][0] == arr_board[1][0] && arr_board[1][0] == arr_board[2][0] && arr_board[0][0] == arr_board[2][0]){
                return true;
            }else{
                // 10 and 11 and 20
                if(arr_board[1][0] == arr_board[1][1]&& arr_board[1][1] == arr_board[1][2] && arr_board[1][0] == arr_board[1][2]){
                    return true;
                }
            }
        }
        if (arr_board[1][1] == player_two){
            // 01 and 11 and 21
            if (arr_board[0][1] == arr_board[1][1] && arr_board[1][1] == arr_board[2][1] && arr_board[0][1] == arr_board[2][1]){
                return true;
            }
            // 10 and 11 and 12
            if(arr_board[1][0] == arr_board[1][1]&& arr_board[1][1] == arr_board[1][2] && arr_board[1][0] == arr_board[1][2]){
                return true;
            }
            //diagonal down: 00 and 11 and 22
            if (arr_board[0][0] == arr_board[1][1] && arr_board[1][1] == arr_board[2][2] && arr_board[0][0] == arr_board[2][2]){
                return true;
            }
            // diagonal up : 20 and 11 and 02
            if (arr_board[0][2] == arr_board[1][1] && arr_board[1][1] == arr_board[2][0] && arr_board[0][2] == arr_board[2][0]){
                return true;
            }
        }
        if (arr_board[1][2] == player_two){
            if (arr_board[0][2] == arr_board[1][2] && arr_board[1][2] == arr_board[2][2] && arr_board[0][2] == arr_board[2][2]){
                return true;
            }
            if(arr_board[1][0] == arr_board[1][1]&& arr_board[1][1] == arr_board[1][2] && arr_board[1][0] == arr_board[1][2]){
                return true;
            }
        }
        if (arr_board[2][0] == player_two){
            if (arr_board[0][0] == arr_board[1][0] && arr_board[1][0] == arr_board[2][0] && arr_board[0][0] == arr_board[2][0]){
                return true;
            }
            if (arr_board[0][2] == arr_board[1][1] && arr_board[1][1] == arr_board[2][0] && arr_board[0][2] == arr_board[2][0]){
                return true;
            }
            if (arr_board[2][0] == arr_board[2][1] && arr_board[2][1] == arr_board[2][2] && arr_board[2][0] == arr_board[2][2]){
                return true;
            }
        }
        if (arr_board[2][1] == player_two){
            if (arr_board[0][1] == arr_board[1][1] && arr_board[1][1] == arr_board[2][1] && arr_board[0][1] == arr_board[2][1]){
                return true;
            }
            if (arr_board[2][0] == arr_board[2][1] && arr_board[2][1] == arr_board[2][2] && arr_board[2][0] == arr_board[2][2]){
                return true;
            }
        }
        if (arr_board[2][2] == player_two){
            if (arr_board[0][0] == arr_board[1][1] && arr_board[1][1] == arr_board[2][2] && arr_board[0][0] == arr_board[2][2]){
                return true;
            }
            if (arr_board[0][2] == arr_board[1][2] && arr_board[1][2] == arr_board[2][2] && arr_board[0][2] == arr_board[2][2]){
                return true;
            }
            if (arr_board[2][0] == arr_board[2][1] && arr_board[2][1] == arr_board[2][2] && arr_board[2][0] == arr_board[2][2]){
                return true;
            }
        }
    }
    return false;
}


void Game::initboard(){
    /*
     * INITIALIZE THE BOARD TO PLAY TIC TAC TOE
     */
    cout <<"                COLUMN: 0              COLUMN: 1                COLUMN: 2         "<< endl;
    cout<<"           ----------------------------------------------------------------------\n";
    cout<<"          |                     |                       |                       |\n";
    cout<<"ROW: 0    "<<"|\t     "<<arr_board[0][0]<<"\t        |\t    "<<arr_board[0][1]<<"\t\t|\t   "<<arr_board[0][2]<<"\t\t|\n";
    cout<<"          |                     |                       |                       |\n";
    cout<<"          ---------------------------------------------------------------------- \n";
    cout<<"          |                     |                       |                       |\n";
    cout<<"ROW: 1    |\t     "<<arr_board[1][0]<<"\t        |\t    "<<arr_board[1][1]<<"\t\t|\t   "<<arr_board[1][2]<<"\t\t|\n";
    cout<<"          |                     |                       |                       |\n";
    cout<<"          ----------------------------------------------------------------------\n";
    cout<<"          |                     |                       |                       |\n";
    cout<<"ROW: 2    |\t     "<<arr_board[2][0]<<"\t        |\t    "<<  arr_board[2][1]<<"\t\t|\t   "<<arr_board[2][2]<<"\t\t|\n";
    cout<<"          |                     |                       |                       |\n";
    cout<< "         ------------------------------------------------------------------------\n";
}

void Game::getchoice () {
    /*
     * STARTER FOR THE GAME
     */
    cout << "Hi, welcome to play tic-tac-toe with each other ;) " << endl;
    cout << "---------------------------------------------------" << endl;
    cout << " Please, initialize the first player's name: " << endl;
    cin >> player_one_name;
    cout << "Now, the second player's name please: " << endl;
    cin >> player_two_name;
    cout << "---------------------------------------------------" << endl;
    cout << "Hi "<< player_one_name << " and "<< player_two_name << endl;
    printf("Now it's time to choose your chars\n");
    first:
    cout << player_one_name << " choose your char:"  << endl;
    cout << "**************************" << endl;
    cout << "--> O" << endl;
    cout << "--> X" << endl;
    cout << "**************************" << endl;
    cin >> player_one;
    if (player_one == "O"|| player_one == "X"){
        if (player_one == "O"){
            player_two = "X";
            cout << player_two_name << " you will play with X\n" << endl;
        }
        else if (player_one == "X"){
            player_two = "O";
            cout << player_two_name << " you will play with O\n" << endl;
        }
    }else{
        cerr << "Invalid char try again !" << endl;
        goto first;
    }
}

void Game::maingameloop() {
    /*
     * MY GAME IN ONE FUNCTION
     */
    cout <<"The board looks like this:\n" << endl;
    //displaying the board
    initboard();

    cerr << "Note: Give the desired row and the column to set your char there ! \n"<< endl;
    // this will always tell who's turn is it right now
    counter = 0;
    changer:
    //Player 1
    if (counter % 2 == 0){
        cout << "Player 1: "<<player_one << endl;
        cout <<"**********************************************"<< endl;
        x:
        cout << " Which row do you want to choose ? " << endl;
        cin >> row_player_one;
        if ((row_player_one >= 0) && (row_player_one <= 2)){
            y:
            cout << "Which column ? "<< endl;
            cin >> column_player_one;
            if ((column_player_one >= 0) && (column_player_one <= 2)){
                for (int i = 0; i < 3; ++i) {
                    for (int j = 0; j < 3; ++j) {
                        if ((i == row_player_one) && ((j == column_player_one))){
                            if (arr_board[i][j] == "O" || arr_board[i][j] == "X"){
                                cerr << "There is already a char! choose another row and column !" << endl;
                                goto x;
                            }else{
                                arr_board[i][j] = player_one;
                                initboard();
                                if (victory(counter)){
                                    printf("Game is done!");
                                    cout << player_one_name << " you won !" << endl;
                                }else{
                                    if (draw(counter)){
                                        printf("Draw!");
                                    }
                                    counter++;
                                    goto changer;
                                }
                            }
                        }else{
                            continue;
                        }
                    }
                }
            }else{
                cerr << "Invalid column!" << endl;
                goto y;
            }
        }else{
            cerr << " Invalid row!" << endl;
            goto x;
        }
    }else{
        //Player 2
        if (counter %2 != 0){
            cout << "Player 2: "<<player_two << endl;
            cout <<"**********************************************"<< endl;
            x_two:
            cout << " Which row do you want to choose ? " << endl;
            cin >> row_player_two;
            if ((row_player_two >= 0) && (row_player_two <= 2)) {
                y_two:
                cout << "Which column ? " << endl;
                cin >> column_player_two;
                if ((column_player_two >= 0) && (column_player_two <= 2)) {
                    for (int i = 0; i < 3; ++i) {
                        for (int j = 0; j < 3; ++j) {
                            if ((i == row_player_two) && ((j == column_player_two))) {
                                if (arr_board[i][j] == "O" || arr_board[i][j] == "X") {
                                    cerr<< "There is a char! choose another row and column !"<<endl;
                                    goto x_two;
                                } else {
                                    arr_board[i][j] = player_two;
                                    initboard();
                                    if (victory(counter)){
                                        printf("Game is done!");
                                        cout << player_two_name << " you won !" << endl;
                                    }else{
                                        if (draw(counter)){
                                            printf("Draw!");
                                        }
                                        counter++;
                                        goto changer;
                                    }
                                }
                            } else {
                                continue;
                            }
                        }
                    }
                } else {
                    cerr << "Invalid column!" << endl;
                    goto y_two;
                }
            }else{
                cerr<<"Invalid row!" << endl;
                goto x_two;
            }
        }
    }
}