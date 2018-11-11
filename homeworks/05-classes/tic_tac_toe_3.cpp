#include "tic_tac_toe_3.h"

void TicTacToe3::display_board(ostream& out) const
{
	for (unsigned i = 0; i < pegs.size(); i += 3)
	{
		out << pegs[i].val << "|" << pegs[i + 1].val << "|" << pegs[i + 2].val << std::endl;
	}
}

bool TicTacToe3::check_column_win() const
{
	for (int i = 0; i < 3; ++i)
	{
		if (pegs[i].val == pegs[i + 3].val && pegs[i].val == pegs[i + 6].val &&
			pegs[i + 6].val != " ")
			return true;
	}

	return false;
}

bool TicTacToe3::check_row_win() const
{
	for (int i = 0; i < 9; i += 3)
	{
		if (pegs[i].val == pegs[i + 1].val && pegs[i].val == pegs[i + 2].val &&
			pegs[i + 2].val != " ")
			return true;
	}

	return false;
}

bool TicTacToe3::check_diagonal_win() const
{
	if (pegs[0].val == pegs[4].val && pegs[4].val == pegs[8].val && pegs[8].val != " ")
		return true;
	else if (pegs[6].val == pegs[4].val && pegs[4].val == pegs[2].val && pegs[6].val != " ")
		return true;

	return false;
}

void TicTacToe3::get_input(std::istream & in)
{
	int position;
	std::cout << "Player " << get_player() << 
				", please choose between 1 and 9 to mark your " 
				<< get_player() << ": ";
	in >> position;
	mark_board(position);
}

TicTacToe3::TicTacToe3()
{
	for (int i = 0; i < 9; i++)
	{
		Peg peg;
		pegs.push_back(peg);
	}


}
