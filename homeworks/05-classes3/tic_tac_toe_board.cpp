#include "tic_tac_toe_board.h"

 bool TicTacToeBoard::game_over()
{
	bool over = check_column_win() || check_row_win() || check_diagonal_win() || check_board_full();
	if (over)
	{
		if (check_board_full())
		{
			c_win++;
		}
		else if (next_player == "X")
		{
			o_win++;
		}
		else
		{
			x_win++;
		}
	}

	return over;
}

void TicTacToeBoard::set_next_mark()
{
	if (next_player == "X")
		next_player = "O";
	else
		next_player = "X";
}


 std::string TicTacToeBoard::get_player() const
{
	return next_player;
}


TicTacToeBoard TicTacToeBoard::operator+=(const TicTacToeBoard & b)
{
	x_win += b.x_win;
	o_win += b.o_win;
	c_win += b.c_win;

	return TicTacToeBoard(x_win, o_win, c_win);
}

bool TicTacToeBoard::check_board_full() const
{

	for (auto peg : pegs)
	{
		if (peg.val == " ")
		{
			return false;
		}
	}

	return true;
}

void TicTacToeBoard::clear_board()
{
	for (auto& peg : pegs)
		peg.val = " ";
}

std::istream & operator>>(std::istream & in, TicTacToeBoard & board)
{
	board.get_input(in);
	return in;
}

std::ostream & operator<<(std::ostream & out, const TicTacToeBoard & board)
{
	board.display_board();

	return out;
}
