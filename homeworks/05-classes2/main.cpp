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


	for (auto& i : TTTBoard)
	{
		while (i.game_over() == false)
		{
			cin >> i;
			cout << endl;
			cout << i;
			{
				result = result + i;
			}
			if (i.get_player() == "X")
			{
				winner = "O";
			}
			else winner = "X";

			cout << "GAME OVER" << endl << endl << endl;
			cout << "Congratulations! " << winner << " wins!" << endl;
		}
	}
	return 0;
}



	
