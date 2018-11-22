#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H

#include<vector>
#include<string>
#include<memory>
#include<fstream>
#include "tic_tac_toe_manager.h"

using std::string; using std::vector; using std::unique_ptr;

class TicTacToeData 
{
public:
	vector<unique_ptr<TicTacToeBoard>> get_games();
	void save_pegs(vector<Peg>& p);
private:
	string file_name{ "tic_tac_toe.txt" };
	vector<string> pegs;
};


#endif //!TIC_TAC_TOE_DATA_H