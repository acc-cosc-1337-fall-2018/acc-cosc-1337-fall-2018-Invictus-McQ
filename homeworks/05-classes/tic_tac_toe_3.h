#ifndef TIC_TIC_TOE_3_H
#define TIC_TIC_TOE_3_H

#include "tic_tac_toe_board.h"

class TicTacToe3 : public TicTacToeBoard
{
public:
	TicTacToe3();
	TicTacToe3(std::vector<Peg> p);
protected:
	void display_board(std::ostream& out) const override;
	bool check_column_win() const override;
	bool check_row_win() const override;
	bool check_diagonal_win() const override;
	void get_input(std::istream& in) override;
};
#endif //TIC_TIC_TOE_3_H

