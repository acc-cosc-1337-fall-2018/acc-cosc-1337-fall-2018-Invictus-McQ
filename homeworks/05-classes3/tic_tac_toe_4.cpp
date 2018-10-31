#include "tic_tac_toe_4.h"

void TicTacToe4::display_board(std::ostream& out) const
{
	for (unsigned i = 0; i < pegs.size(); i += 4)
	{
		out << pegs[i].val << "|" << pegs[i + 1].val << "|" << pegs[i + 2].val << "|" << pegs[i + 3].val << std::endl;
	}
	out << x_win << o_win << c_win << std::endl;

}