#include "tic_tac_toe_manager.h"

using std::make_unique; using std::move;

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

TicTacToeManager::TicTacToeManager()
{

	boards = tic_tac_toe_data.get_games();
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

	tic_tac_toe_data.save_pegs(board -> get_pegs() ); //I think this is where it stopped working... when this was added.
	
	boards.push_back(move(board));
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

void TicTacToeManager::get_winner_totals(int & x, int & o, int & c)
{
	x = x_win;
	o = o_win;
	c = c_win;
}