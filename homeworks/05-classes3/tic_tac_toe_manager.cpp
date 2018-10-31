#include "tic_tac_toe_manager.h"

std::ostream & operator<<(std::ostream & out, const TicTacToeManager & manager)
{
	TicTacToeBoard result;

	for (auto board : manager.boards) 
	{
		out << board;
		result += board;
	}

	out << "History total: \n";
	out << result;

	return out;
}

void TicTacToeManager::run()
{
	int choice{ 1 };

	do
	{
		TicTacToeBoard board;
		
		std::string player;
		std::cout << "Enter first player X or O: ";
		std::cin >> player;

		board.start_game(player);

		while (!board.game_over())
		{
			int position;
			std::cout << "Enter position(1-9): ";
			std::cin >> position;
			board.mark_board(position);
			board.display_board();
		}

		boards.push_back(board);

		std::cout << "Enter 1 to play again, any other key to exit";
		std::cin >> choice;

	} while (choice == 1);
}
