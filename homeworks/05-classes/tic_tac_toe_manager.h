#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include "tic_tac_toe_board.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

#include "tic_tac_toe_data.h"
#include <memory>


using std::string; using std::vector; using std::unique_ptr; 
using std::ostream; using std::istream;


enum GameType {
	tic_tac_toe_3,
	tic_tac_toe_4
};

class TicTacToeManager
{
public:
	TicTacToeManager();
	TicTacToeManager(TicTacToeData  tic_tac_toe_data) { boards = tic_tac_toe_data.get_games(); }
	unique_ptr<TicTacToeBoard> get_game(GameType game_type);
	void save_game(unique_ptr<TicTacToeBoard> board);
	friend ostream& operator <<(ostream& out, const TicTacToeManager& m);
	const vector<unique_ptr<TicTacToeBoard>>& get_games();
	void get_winner_totals(int& x, int& o, int& c);
private:
	vector<unique_ptr<TicTacToeBoard>> boards;
	void update_winner_count(string& winner);
	int x_win{ 0 };
	int o_win{ 0 };
	int c_win{ 0 };
	TicTacToeData tic_tac_toe_data;

};


#endif // !TIC_TAC_TOE_MANAGER_H