#ifndef TTT_BOARD_H
#define TTT_BOARD_H

#include <string>
#include <vector>
#include <iostream>

using std::string; using std::vector;

class TicTacToeBoard 
{

public:
	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player();
	void display_board();

private:
	vector<string> pegs{ " ", " ", " ", " ", " ", " ", " ", " ", " " };
	string next_player;
	void set_next_player();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();
	void clear_board();
	bool check_board_full();
	
};

#endif // TTT_BOARD_H


