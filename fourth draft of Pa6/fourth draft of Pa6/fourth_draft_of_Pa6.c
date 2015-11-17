
#include "fourth_draft_of_Pa6.h"

void welcome_screen(void)
{
	printf("*****BATTLESHIP*****\n\n");
	printf("This is a two player navy game\n");
	printf("Each player has a fleet of 5 ships\n");
	printf("These ships can take a certain number of hits, Carriers(5),Battleships(4),Cruisers(3),Submarines(3),and Destroyers(2)\n");
	printf("The player to sink all of the other players battle ships first wins.\n\n");
	printf("*****GOOD LUCK******\n\n");

	return;
}

void initialize_game_board(char board[][10], int rows, int columns)
{
	int row_index = 0, col_index = 0;

	// rows
	for (row_index = 0; row_index < rows; row_index++)
	{
		// columns
		for (col_index = 0; col_index < columns; col_index++)
		{
			board[row_index][col_index] = '~';
		}
	}
}

void print_game_board (char board[][10])
{
	int row_index = 0, col_index = 0;

	// rows
	for (row_index = 0; row_index < 10; row_index++)
	{
		// columns
		for (col_index = 0; col_index < 10; col_index++)
		{
			printf (" %c ", board[row_index][col_index]);
		}
		putchar ('\n');
	}
}

int select_who_starts_first(void)
{
	int who_starts_first = 0;

	 who_starts_first = rand() % 2 + 1;

	 if(who_starts_first == 1)
	 {
		 printf("Player 1! you will be going first\n\n");
		 return 1;
	 }
	 else if(who_starts_first == 2)
	 {
		 printf("Player 2 will be going first\n\n");
		 return 2;
	 }
}
		
void manually_place_ships_on_board(char board[][10], char *battleshipsChosen[5], int ships_placed)
{
	int row_index = 0, column_index = 0, length_of_ship = 0, i = 0;

	bool selectionValid = false;

	char type_of_ship, direction;

	printf(" Please enter coordinates betweeen 0 and 9 in the form X Y to choose the starting placement of your ship\n");
	scanf("%d %d", &row_index, &column_index); // check the spaces between the %d's

	printf(" Please enter the type of ship, Carreir(c), Battleship(b), Cruiser(r), Submarine(s), or Destroyer(d)\n");
	scanf("%c", &type_of_ship);// check the spacing of the %c

	while (!selectionValid) {
		for(i = 0; i<ships_placed; i++){
			if (*battleshipsChosen[i] == type_of_ship ) {
				printf("its wrong try again \n");
				scanf("%c", &type_of_ship);
				continue;
			}
		selectionValid = true;
		*battleshipsChosen[ships_placed] = type_of_ship;
		}
	}

	printf(" Please enter the direction you want the ship to be placed, either Verticle(v), or Horizontal(h)\n");
	scanf("%c", &direction);

	if(type_of_ship == 'c')
	{
		length_of_ship = 5;
	}
	else if( type_of_ship == 'b')
	{
		length_of_ship = 4;
	}
	else if(type_of_ship == 'r')
	{
		length_of_ship = 3;
	}
	else if(type_of_ship == 's')
	{
		length_of_ship = 3;
	}
	else if(type_of_ship == 'd')
	{
		length_of_ship = 2;
	}



	for(direction == 'v'; row_index < (row_index + length_of_ship); row_index++)
	{
		board[row_index][column_index] = type_of_ship;
	}

	for(direction == 'h'; column_index < (column_index + length_of_ship); column_index)
	{
		board[row_index][column_index] = type_of_ship;
	}


	return;

}


int generate_direction(void)
{
	int result = 0;

	result = rand () % 2; // 0 - vertical, 1 - horizontal

	return result;
}

//int generate_start_point(int length, int dir, int *row_start_ptr, int *col_start_ptr)
//{
//	// Note: the way we are generating starting points/coordinates
//	// uses the length of the ship to restrict the random
//	// values generated. This way we don't need extra logic
//	// to determine if we are placing a ship outside
//	// the bounds of our board/2-D array.
//	if (dir == 0) // vertical
//	{
//		*col_start_ptr = rand () % 10;
//		*row_start_ptr = rand () % (10 - length + 1); // down from the start point
//	}
//	else // horizontal
//	{
//		*col_start_ptr = rand () % (10 - length + 1);
//		*row_start_ptr = rand () % 10;
//	}
//}