#include "tic_tac_toe_board.h"


using std::endl; using std::cout; using std::cin; using std::string;


int main()
{

	string play_again = "y";
	int peg_pos = 0;
	bool endgame = false;
	string winner;
	cout << "It's Kevin's super simple Tic-Tac-Toe! Have fun! OR ELSE!" << endl;

	TicTacToeBoard game;
	game.start_game("X");
	game.display_board();
	while (play_again != "q")
	{

		cout << "These are the peg positions on the board (1 to 9)" << endl;
		cout << "[1]" << "[2]" << "[3]" << endl << "[4]" << "[5]" << "[6]" << endl << "[7]" << "[8]" << "[9]" << endl;

		while (game.game_over() == false) {
			std::cout << "Enter the position for " << game.get_player() << ":  ";
			std::cin >> peg_pos;
			game.mark_board(peg_pos);
			std::cout << std::endl;
			game.display_board();
		}

		if (game.get_player() == "X") 
		{
			winner = "O";
		}
		else winner = "X";

		cout << "GAME OVER" << endl << endl << endl;
		std::cout << "Congratulations! " << winner << " wins!" << std::endl;
		cout << "Would you like to play again? " << endl;
		cout << "If yes, PRESS ENTER!" << endl << endl;
		cout << "Otherwise, press 'q' then ENTER to quit." << endl;
		cin >> play_again;

	}
	return 0;
}


	
