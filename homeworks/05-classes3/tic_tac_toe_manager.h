#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include "tic_tac_toe_board.h"


class TicTacToeManager 
{
public:
	void run();
	friend std::ostream& operator <<(std::ostream& out, const TicTacToeManager& manager);
private:
	std::vector<TicTacToeBoard> boards;
};


#endif // !TIC_TAC_TOE_MANAGER_H