#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H

#include<string>
#include<fstream>

#include"tic_tac_toe_board.h"
#include"tic_tac_toe_3.h"
#include"tic_tac_toe_4.h"


using std::string; using std::vector; using std::unique_ptr;

class TicTacToeData 
{
public:
	vector<unique_ptr<TicTacToeBoard>> get_games();
	void save_pegs(const vector<Peg>& p);
private:
	const string file_name{ "tic_tac_toe_data.txt" };
	vector<string> pegs;
};


#endif //!TIC_TAC_TOE_DATA_H