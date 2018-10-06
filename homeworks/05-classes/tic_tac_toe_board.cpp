#include "tic_tac_toe_board.h"

using std::cout; using std::endl;

bool TicTacToeBoard::game_over()
{
	if (check_row_win() || check_column_win() || check_diagonal_win() || check_board_full()) 
	{
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

void TicTacToeBoard::display_board()
{
	cout << '|' << pegs[0] << " || " << pegs[1] << " || " << pegs[2] << '|' << endl;
	cout << "--------------" << endl;
	cout << '|' << pegs[3] << " || " << pegs[4] << " || " << pegs[5] << '|' << endl;
	cout << "--------------" << endl;
	cout << '|' << pegs[6] << " || " << pegs[7] << " || " << pegs[8] << '|' << endl;
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
