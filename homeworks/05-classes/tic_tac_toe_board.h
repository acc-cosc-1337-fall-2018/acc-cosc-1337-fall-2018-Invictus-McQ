#ifndef TTT_BOARD_H
#define TTT_BOARD_H


#include <string>

using std::string;

class TicTacToeBoard 
{


public:

	bool game_over();
	void start_game(string player);
	void mark_board(int position);
	string get_player();
	void display_board();


private:
	
	
};

#endif // TTT_BOARD_H

