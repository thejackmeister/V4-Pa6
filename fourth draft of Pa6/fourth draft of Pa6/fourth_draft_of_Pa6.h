#ifndef fourth_draft_of_PA6.h
#define FOURTH_DRAFT_OF_PA6_h

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void welcome_screen(void); //displays an initial program welcome message along with the rules of Battleship

void initialize_game_board(char board[][10], int rows, int columns); // sets each cell in a game board to '~' 

void print_game_board (char board[][10]);

int select_who_starts_first(void); //determines if Player1 or Player2 goes first in the game

void manually_place_ships_on_board(char board[][10], char *battleshipsChosen[5], int ships_placed);//, char *battleshipsChosen[5], int ships_placed); //allows the user to place each of the 5 types of ships on his/her game board

void randomly_place_ships_on_board(char board[][10], int rows, int columns); //randomly places the 5 types of ships on a given board

int generate_direction (void); // generates the starting direction

//void generate_start_point (int length, int dir, int *row_start_ptr, int *col_start_ptr);

void check_and_update(char board [][10], int row, int column);

int is_Hit(char board[][10], int row, int column); // is hit or a miss

int is_winner(char hits_on_player1, char hits_on_player2); //determines if a winner exists

void update_board(char board [][10], int rows, int columns, char c); //updates the board every time a shot is taken. '*' indicates a hit and 'm' indicates a miss

//void display_board(char board[][10], int rows, int columns); //displays a board to the screen
//
//output_current_move(); //writes the position of the shot taken by the current player to the log file. It also writes whether or not it was a hit, miss, and if the ship was sunk
//
//check_if_sunk_ship(); //determines if a ship was sunk
//
//output_stats(); //writes the statistics collected on each player to the log file

//void update_stats ( stats *stats_ptr; hit int status



#endif FOURTH_DRAFT_OF_PA6_h