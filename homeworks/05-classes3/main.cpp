#include <iostream>
#include <string>
#include <vector>
#include "tic_tac_toe_manager.h"


int main()
{
	TicTacToeManager manager;

	manager.run();

	std::cout << manager;

	return 0;
}

