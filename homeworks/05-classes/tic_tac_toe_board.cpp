#include "tic_tac_toe_board.h"

void TicTacToeBoard::set_next_player()
{
	if (next_player == "X")
		next_player = "O";
	else
		next_player = "X";
}

 string TicTacToeBoard::get_player() const
{
	return next_player;
}

bool TicTacToeBoard::check_board_full() const
{
	for (auto peg : pegs)
	{
		if( peg.val == " ") 
		{
			return false;
		}
	}
	return true;

}

string TicTacToeBoard::get_winner() const
{
	if (check_column_win() || check_row_win() || check_diagonal_win())
	{
		if (next_player == "O")
		{
			return "X";
		}
		else
		{
			return "O";
		}
	}
	if (check_board_full())
	{
		return "C";
	}
	else
	{
		return "E";
	}
}

const vector<Peg>& TicTacToeBoard::get_pegs()
{
	return pegs;
}

void TicTacToeBoard::clear_board()
{
	for (auto& peg : pegs)
	{ 
		peg.val = " ";
	}
		
}

istream & operator>>(istream & in, TicTacToeBoard & board)
{
	board.get_input(in);
	return in;
}

ostream & operator<<(ostream & out, const TicTacToeBoard & board)
{
	board.display_board(out);
	return out;
}

bool TicTacToeBoard::game_over()
{
	if (check_column_win() || check_row_win() || check_diagonal_win() || check_board_full())
		return true;
	
	if (check_board_full())
	{
		return true;
	}
		else
			return false;

	
}

void TicTacToeBoard::start_game(const string player)
{
	next_player = player;
	clear_board();
}

void TicTacToeBoard::mark_board(const int position)
{ 
	pegs[position - 1].val = next_player; 
	set_next_player(); 
}
