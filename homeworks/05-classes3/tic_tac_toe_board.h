#ifndef TIC_TAC_TOE_BOARD_H
#define TIC_TAC_TOE_BOARD_H

#include <vector>
#include <iostream>
#include <string>
#include "peg.h"

class TicTacToeBoard
{
public:
	TicTacToeBoard() = default;
	TicTacToeBoard(int x, int o, int c) : x_win(x), o_win(o), c_win(o) {}
	bool game_over();
	void start_game(const std::string first) { next_player = first; clear_board(); }
	void mark_board(const int position) { pegs[position - 1].val = next_player; set_next_mark(); }
	std::string get_player() const;
	friend std::istream& operator >>(std::istream& in, TicTacToeBoard& board);
	friend std::ostream& operator <<(std::ostream& out, const TicTacToeBoard& board);
protected:
	int x_win{ 0 };
	int o_win{ 0 };
	int c_win{ 0 };
	void set_next_mark();
	virtual bool check_column_win() const =0;
	virtual bool check_row_win() const = 0;
	virtual bool check_diagonal_win() const = 0;
	virtual void display_board(std::ostream& out) const = 0;
	virtual void get_input(std::istream& in) = 0;
	bool check_board_full() const;
	void clear_board();
	std::vector<Peg> pegs;
	std::string next_player;
};

#endif // !TIC_TAC_TOE_BOARD_H