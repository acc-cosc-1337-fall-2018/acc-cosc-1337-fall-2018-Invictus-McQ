#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe_manager.h"

using std::unique_ptr; using std::make_unique;

int main()
{
	int choice{ 1 };

	do
	{
		int t3ort4;
		std::cout << "Which game?  3 x 3 or 4 x 4? ";
		std::cin >> t3ort4;

		unique_ptr<TicTacToeBoard> board;

		if (t3ort4 == 3)
		{
			board = std::make_unique<TicTacToe3>();
		}
		else
		{
			board = std::make_unique<TicTacToe4>();
		}

		std::string player;
		std::cout << "Enter first player X or O: ";
		std::cin >> player;

		board -> start_game(player);

		while (!board->game_over())
		{
			std::cin >> *board;
			std::cout << *board;
		}

		std::cout << "Enter 1 to play again OR any other number to exit";
		std::cin >> choice;

	} while (choice == 1);
	return 0;
}

