#include "tic_tac_toe_board.h"
#include <vector>


using std::endl; using std::cout; using std::cin; using std::string;


int main()
{
	TicTacToeBoard a;
	TicTacToeBoard b;
	TicTacToeBoard c;
	TicTacToeBoard result;
	vector <TicTacToeBoard> TTTBoard{ a, b , c };
	string winner;

	cout << "It's Kevin's super simple Tic-Tac-Toe! Have fun! OR ELSE!" << endl;


	for (auto& i : TTTBoard)
	{
		cout << "These are the peg positions on the board (1 to 9)" << endl;
		cout << "[1]" << "[2]" << "[3]" << endl << "[4]" << "[5]" << "[6]" << endl << "[7]" << "[8]" << "[9]" << endl;

		i.start_game("X");
		while (i.game_over() == false)
		{
			cin >> i;
			cout << endl;
			cout << i;
			{
				result = result + i;
			}
		}
			if (i.get_player() == "X")
			{
				winner = "O";
			}
			else winner = "X";
		
			cout << "GAME OVER" << endl << endl << endl;
			cout << "Congratulations! " << winner << " wins!" << endl;
		
	}
	return 0;
}



	
