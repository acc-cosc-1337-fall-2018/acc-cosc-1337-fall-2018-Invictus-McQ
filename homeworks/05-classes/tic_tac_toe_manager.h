#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include "tic_tac_toe_board.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <memory>

using std::string; using std::vector; using std::unique_ptr; 
using std::ostream; using std::istream;


enum GameType {
	tic_tac_toe_3,
	tic_tac_toe_t4
};

class TicTacToeManager : public TicTacToeBoard
{
public:
	TicTacToeManager() = default;
	unique_ptr<TicTacToeBoard> get_game(GameType game_type);
	void save_game(std::unique_ptr<TicTacToeBoard> board);
	friend ostream& operator <<(ostream& out, const TicTacToeManager& m);
private:
	vector<std::unique_ptr<TicTacToeBoard>> boards;
	int x_win{ 0 };
	int o_win{ 0 };
	int c_win{ 0 };
	void update_winner_count(string& winner);
};


#endif // !TIC_TAC_TOE_MANAGER_H