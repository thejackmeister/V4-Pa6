
#include "fourth_draft_of_Pa6.h"


int main(void)
{
	char player1_board[10][10]= {{'~', '~'}, {'~', '~'}}, player2_board[10][10]={{'~','~'}, {'~','~'}};
	//char *battleshipsChosen[5];
	int number_of_ships_placed = 0;

	//FILE* outfile;


	
	srand((unsigned int) time(NULL)); // makes the random number generator more random

	welcome_screen();

	initialize_game_board (player1_board, 10, 10);

	print_game_board(player1_board);

	select_who_starts_first();

	// do
	// {
	//	for( number_of_ships_placed = 0; number_of_ships_placed < 5; number_of_ships_placed++)
	//	{
	//		manually_place_ships_on_board(player1_board, battleshipsChosen, number_of_ships_placed);
	//	}
	// }
	// while( /*something to check if the same ship has been placed previously, or if ships run into eachother*/);

	//print_game_board(player1_board);

	//generate_start_point( ,generate_direction(), );

	

		return 0;
}