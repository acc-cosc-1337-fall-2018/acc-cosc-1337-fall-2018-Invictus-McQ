#ifndef TTT_BOARD_H
#define TTT_BOARD_H

#include <string>
#include <vector>
#include <iostream>

using std::string; using std::vector;

class TicTacToeBoard 
{

public:
	TicTacToe() = default
	TicTacToe(int x, int o, int c) : x_win(x), o_win(o), c_win(c) {}
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player();
	friend std::istream & operator >> (istream& in, TicTacToeBoard& d);
	friend std::ostream & operator >> (ostream& out, const TicTacToeBoard& d);
	friend operator+(const TicTacToeBoard& b, const TicTacToeBoard& b2);
private:
	vector<string> pegs{ " ", " ", " ", " ", " ", " ", " ", " ", " " };
	string next_player;
	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	int x_win = 0;
	int o_win = 0;
	int c_win = 0;
	
};

#endif // TTT_BOARD_H


