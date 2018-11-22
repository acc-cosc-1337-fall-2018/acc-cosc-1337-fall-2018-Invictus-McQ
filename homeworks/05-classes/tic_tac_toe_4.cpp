#include "tic_tac_toe_4.h"

void TicTacToe4::display_board(std::ostream& out) const
{
	for (int i = 0; i < pegs.size(); i += 4)
	{
		out << pegs[i].val << "|" << pegs[i + 1].val << "|" << pegs[i + 2].val 
			<< "|" << pegs[i + 3].val << std::endl;
	}
}

bool TicTacToe4::check_column_win() const
{
	for (int i = 0; i < 4; ++i)
	{
		if (pegs[i].val == pegs[i + 4].val && pegs[i].val == pegs[i + 8].val &&
			pegs[i + 8].val == pegs[i + 12].val && pegs[i + 12].val != " ")
			return true;
	}

	return false;
}

bool TicTacToe4::check_row_win() const
{
	for (int i = 0; i < 16; i += 4)
	{
		if (pegs[i].val == pegs[i + 1].val && pegs[i].val == pegs[i + 2].val &&
			pegs[i + 2].val == pegs[i + 3].val && pegs[i + 3].val != " ")
			return true;
	}

	return false;
}

bool TicTacToe4::check_diagonal_win() const
{
	if (pegs[0].val == pegs[5].val && pegs[5].val == pegs[10].val && pegs[10].val == pegs[15].val && pegs[15].val != " ")
		return true;
	else if (pegs[12].val == pegs[9].val && pegs[9].val == pegs[6].val && pegs[6].val == pegs[3].val && pegs[3].val != " ")
		return true;

	return false;
}

void TicTacToe4::get_input(std::istream & in)
{
	int pos;
	std::cout << "Enter position (1-16): ";
	in >> pos;
	mark_board(pos);
}

TicTacToe4::TicTacToe4()
{
	for (int i = 0; i < 16; i++)
	{
		Peg p;
		pegs.push_back(p);
	}


}

TicTacToe4::TicTacToe4(std::vector<Peg> p) : TicTacToeBoard(p)
{
	//not necessary, but allows for escape for tests if one conditional is true
	bool escape = false;
	//check column win conditions, set next_player
	if (!escape)
	{
		for (int i = 0; i < 4; ++i)
		{
			if (pegs[i].val == pegs[i + 4].val && pegs[i].val == pegs[i + 8].val &&
				pegs[i + 8].val == pegs[i + 12].val && pegs[i + 12].val != " ")
			{
				escape = true;
				if (pegs[i].val == "X")
				{
					next_player = "O";
				}
				else next_player = "X";
			}
		}
	}
	//check row win conditions, set next_player
	if (!escape)
	{
		for (int i = 0; i < 16; i += 4)
		{
			if (pegs[i].val == pegs[i + 1].val && pegs[i].val == pegs[i + 2].val &&
				pegs[i + 2].val == pegs[i + 3].val && pegs[i + 3].val != " ")
			{
				escape = true;
				if (pegs[i].val == "X")
				{
					next_player = "O";
				}
				else next_player = "X";
			}
		}
	}
	//check diagonal win conditions, set next_player
	if (!escape)
	{
		if (pegs[0].val == pegs[5].val && pegs[5].val == pegs[10].val && pegs[10].val == pegs[15].val && pegs[15].val != " ")
		{
			if (pegs[0].val == "X")
			{
				next_player = "O";
			}
			else next_player = "X";
		}
		else if (pegs[12].val == pegs[9].val && pegs[9].val == pegs[6].val && pegs[6].val == pegs[3].val && pegs[3].val != " ")
		{
			if (pegs[6].val == "X")
			{
				next_player = "O";
			}
			else next_player = "X";
		}
	}
}