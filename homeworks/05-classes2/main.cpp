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

	for (auto i : TTTBoard.size(); i++) 
	{
		while (TTTBoard[i].game_over() == false) {
			TTTBoard[i].mark_board(in);
			cout << endl;
			out;
			{
		result += TTTBoard[i]
	}
	
	return 0;
}


	
