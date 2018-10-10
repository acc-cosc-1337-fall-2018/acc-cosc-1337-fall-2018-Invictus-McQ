#include "tic_tac_toe_board.h"

using std::cout; using std::endl;

bool TicTacToeBoard::game_over()
{
	if (check_row_win() || check_column_win() || check_diagonal_win() || check_board_full()) 
	{
		if (check_board_full() && !(check_row_win() || check_column_win() || check_diagonal_win())) {
			c_win = 1;
		}
		else if (next_player == "X")
		{
			x_win = 1;
		}
		else if (next_player == "O")
		{
			o_win = 1;
		}
		return true;
	}
	else return false;



}

void TicTacToeBoard::start_game(string player)
{
	next_player = player;
	clear_board();
}

void TicTacToeBoard::mark_board(int position)
{
	position--;
	pegs[position] = next_player;
	set_next_player();
}

string TicTacToeBoard::get_player()
{
	return next_player;
}


void TicTacToeBoard::set_next_player()
{
	if (next_player == "X") {
		next_player = "O";
	}
	else if (next_player == "O") {
		next_player = "X";
	}
	else next_player = "X";
}

bool TicTacToeBoard::check_column_win()
{
	if ((pegs[0] == pegs[3]) && (pegs[3] == pegs[6]) && (pegs[0] != " "))
		return true;
	else if ((pegs[1] == pegs[4]) && (pegs[4] == pegs[7]) && (pegs[1] != " "))
		return true;
	else if ((pegs[2] == pegs[5]) && (pegs[5] == pegs[8]) && (pegs[2] != " "))
		return true;
	else
		return false;
}

bool TicTacToeBoard::check_row_win()
{
	if ((pegs[0] == pegs[1]) && (pegs[1] == pegs[2]) && (pegs[0] != " "))
		return true;
	else if ((pegs[3] == pegs[4]) && (pegs[4] == pegs[5]) && (pegs[3] != " "))
		return true;
	else if ((pegs[6] == pegs[7]) && (pegs[7] == pegs[8]) && (pegs[6] != " "))
		return true;
	else
		return false;
}

bool TicTacToeBoard::check_diagonal_win()
{
	if ((pegs[0] == pegs[4]) && (pegs[4] == pegs[8]) && (pegs[0] != " "))
		return true;
	else if ((pegs[2] == pegs[4]) && (pegs[4] == pegs[6]) && (pegs[2] != " "))
		return true;
	else
		return false;
}

bool TicTacToeBoard::check_board_full()
{

	bool full = true;
	for (int i = 0; i <= 8; i++)
	{
		if (pegs[i] == " ")
		{
			full = false;
			i = 9;
		}
		else
			full = true;
	}
	return full;
}

void TicTacToeBoard::clear_board()
{
	pegs = { " ", " ", " ", " ", " ", " ", " ", " ", " " };
}

std::istream & operator>>(std::istream & in, TicTacToeBoard & d)
{
	int x;

	std::cout << "Enter the position for " << d.get_player() << ":  ";
	in >> x;
	d.mark_board(x);
	return in;
		
}

std::ostream & operator << (ostream& out, const TicTacToeBoard& d)
{
	out << "|" << d.pegs[0] << " || " << d.pegs[1] << " || " << d.pegs[2] << "|" << endl 
		<< "--------------" << endl 
		<< "|" << d.pegs[3] << " || " << d.pegs[4] << " || " << d.pegs[5] << "|" << endl 
		<< "--------------" << endl 
		<< "|" << d.pegs[6] << " || " << d.pegs[7] << " || " << d.pegs[8] << "|" << endl;

	return out;
}

TicTacToeBoard operator + (const TicTacToeBoard& b, const TicTacToeBoard& b2)
{
	TicTacToeBoard temp;
	temp.x_win = b.x_win + b2.x_win;
	temp.o_win = b.o_win + b2.o_win;
	temp.c_win = b.c_win + b2.c_win;
	return temp;
}