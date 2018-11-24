#include "tic_tac_toe_data.h"

using std::ofstream; using std::ifstream; using std::make_unique;

vector<std::unique_ptr<TicTacToeBoard>> TicTacToeData::get_games()
{
	
	ifstream file0;
	string file_line;
	//initialize a vector of boards
	vector<unique_ptr<TicTacToeBoard>> b_vector;
	file0.open(file_name);

	while (!file0.eof())
	{
		//initialize vector of pegs
		vector<Peg> p;
		//get a line from file
		getline(file0, file_line);

		//iterate through the file line to set pegs in the vector
		for (auto i : file_line)
		{
			//Create a string with ch
			string s(1, i);
			//Create a Peg set val to ch via constructor
			Peg peg0(s);
			//Add the peg to vector of pegs
			p.push_back(peg0);
		}

		//initialize a new board
		unique_ptr<TicTacToeBoard> b;

		//determine game type
		if (p.size() == 9)
			//create board of TicTacToe3 using make_unique
			b = make_unique<TicTacToe3>(p);
		else if (p.size() == 16)
			//create board of TicTacToe4 using make_unique
			b = make_unique<TicTacToe4>(p);

		//push back the initialized board with the correct game type 
		//and the initialized vector of pegs from the line in the file.
		b_vector.push_back(std::move(b));
	}

	file0.close();
	return b_vector;
}

void TicTacToeData::save_pegs(const vector<Peg>& p) //I think this is the problem why nothing runs.
{
	ofstream file0;

	//open file
	file0.open(file_name, std::ios::app);
	

	//iterate through the vector of pegs to write a line in the file.
	for (auto i : p)
	{
		file0 << i.val;
		
	}
	
	//add a "\n" to create a new line
	file0 << "\n";
		//close the file
	file0.close();
}