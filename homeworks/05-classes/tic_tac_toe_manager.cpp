#include "tic_tac_toe_manager.h"

ostream & operator<<(ostream & out, const TicTacToeManager & m)
{
	m.display_board(out);
	return out; 
}

unique_ptr<TicTacToeBoard> TicTacToeManager::get_game(GameType game_type)
{
	unique_ptr<TicTacToeBoard> a;
	if (game_type == tic_tac_toe_3) {
		a = std::make_unique<TicTacToe3>();
	}
	else {
		a = std::make_unique<TicTacToe4>();
	}
	return a; 
}

void TicTacToeManager::save_game(unique_ptr<TicTacToeBoard> board)
{
	boards.push_back(std::move(board));
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