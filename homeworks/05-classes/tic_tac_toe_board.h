#ifndef TIC_TAC_TOE_BOARD_H
#define TIC_TAC_TOE_BOARD_H

#include <vector>
#include <iostream>

#include "peg.h"

using std::vector; using std::string; using std::istream; using std::ostream;

class TicTacToeBoard
{
public:
	TicTacToeBoard() = default;
	TicTacToeBoard(vector<Peg> p) : pegs(p) {}

	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player();
	string get_winner();
	friend istream& operator>>(istream& in, TicTacToeBoard& d);
	friend ostream& operator<<(ostream& out, const TicTacToeBoard& d);
	const vector<Peg>& get_pegs();

protected:
	virtual bool check_column_win() const = 0;
	virtual bool check_row_win() const = 0;
	virtual bool check_diagonal_win() const = 0;
	virtual void display_board(ostream& o) const = 0;
	virtual void get_input(istream& in) = 0;
	void set_next_player();
	bool check_board_full() const;
	void clear_board();
	vector<Peg> pegs;
	string next_player;
	string winner;
};

#endif // !TIC_TAC_TOE_BOARD_H