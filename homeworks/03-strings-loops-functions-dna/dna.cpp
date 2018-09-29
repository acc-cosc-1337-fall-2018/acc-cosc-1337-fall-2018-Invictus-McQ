#include<math.h>
#include "dna.h"

using std::string;

int get_point_mutations(string dna1, string dna2)
{	//write the function code 
	
	int HamDist{ 0 };		//Hamming distance (initialization)

	auto size = dna1.size();//sets size for loops

	if (dna1.size() != dna2.size()) {
		return -1;			//if not equal length, returns -1 value.
	}
	else {
		for (unsigned int i = 0; i < size; ++i) {
			if (dna1[i] != dna2[i]) {
				++HamDist;
			}
		}
		return HamDist;		//Sends final Hamming Distance result
	}

	return 0;
}


//write function code for std::string get_dna_complement(std::string dna)

string get_dna_complement(string dna) {
	auto size{ dna.size() }; //get the size of string let auto handle the data type
	auto toggle{ dna.size() };
	string set;
	string dnaComp;

	for (unsigned int i = 0; i <= size; ++i) {
		set += dna[toggle];
		--toggle;
	}

	for (unsigned int i = 1; i <= size; ++i) {
		if (set[i] == 'G') { dnaComp += 'C'; }
		else
			if (set[i] == 'A') { dnaComp += 'T'; }
			else
				if (set[i] == 'T') { dnaComp += 'A'; }
				else
					if (set[i] == 'C') { dnaComp += 'G'; }
					else dnaComp += 'x';
	}

	return dnaComp;
}

//write function code for std::string transcribe_dna_into_rna(std::string dna);

string transcribe_dna_into_rna(string dna) {
	auto size = dna.size(); //get the size of string let auto handle the data type

	string rna{ };

	--size;

	for (unsigned int i = 0; i <= size; ++i) {
		if (dna[i] == 'T') {
			rna += 'U';
		}
		else (rna += dna[i]);
	}
	return rna;
}


double get_gc_content(string dna)
{
	auto size = dna.size(); //get the size of string let auto handle the data type
	auto gc_count{ 0 }; //initialize to 0 (int) let auto handle data type

	//for ranged loop, for each character in loop, s holds one char
	//auto determines data type in this case s is a char data type
	for (auto s : dna)
	{
		//in C++ logical and is && and logical or is ||
		//usage (and) condition1 && condition2 --- usage (or) condition1 || condition2 
		//write code to determine if s is 'C' or 'G' then increment gc_count by 1
		if (s == 'C' || s == 'G') {
			++gc_count;
		}

	}

	//dividing two integers nets an integer
	//here we need to convert one of the integers to double to get double division
	//that is a result with decimal values
	//static_cast converts a data type from one to another
	//here temporarily convert size to double
	auto gc_content = (gc_count / static_cast<double>(size))*100;

	//custom function to round to a desired precision
	return round_to_precision(gc_content, 2);
}

double round_to_precision(double number, int precision)
{
	return (std::round(number * std::pow(10, precision))) / std::pow(10, precision);
}
