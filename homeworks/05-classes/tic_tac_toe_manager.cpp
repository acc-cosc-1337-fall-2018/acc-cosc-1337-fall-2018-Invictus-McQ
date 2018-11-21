#include "tic_tac_toe_manager.h"

using std::make_unique;


ostream & operator<<(ostream & out, const TicTacToeManager & m)
{
	out << "History by Player:\n\n\n";

	for (int i = 0; i < m.boards.size(); ++i)
	{
		out << *m.boards[i];
	}
	out << "X wins: " << m.x_win 
		<< "\nO wins: " << m.o_win 
		<< "\nC wins: " << m.c_win;
	return out; 
}

unique_ptr<TicTacToeBoard> TicTacToeManager::get_game(GameType game_type)
{
	unique_ptr<TicTacToeBoard> b;
	if (game_type == tic_tac_toe_3) {
		b = make_unique<TicTacToe3>();
	}
	else {
		b = make_unique<TicTacToe4>();
	}
	return b; 
}

void TicTacToeManager::save_game(unique_ptr<TicTacToeBoard> board)
{
	update_winner_count(board->get_winner());
	boards.push_back(std::move(board));
}

const vector<unique_ptr<TicTacToeBoard>>& TicTacToeManager::get_games()
{
	return boards;
}


void TicTacToeManager::update_winner_count(string& winner)
{
	if (winner == "X")
	{
		x_win++;
	}
	else if (winner == "O")
	{
		o_win++;
	}
	else
	{
		c_win++;
	}


}