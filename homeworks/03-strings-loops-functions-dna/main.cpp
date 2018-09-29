#include<iostream>
#include "dna.h"

//write the dna.h include statement here

int main()
{
	//call the dna functions from dna.h and display output
	//Use the function arguments from the test cases in dna_test.cpp
	//Example:
	/*
	auto point_mutation = get_point_mutations("GAGCCTACTAACGGGAT", "CATCGTAATGACGG")
	cout<<point_mutation;
	*/
	using std::cout;
	using std::endl;


	int point_mutation = get_point_mutations("GAGCCTACTAACGGGAT", "CATCGTAATGACGG");
	cout << "Point Mutations:    " << endl; 
	cout << point_mutation << endl;

	auto dna_complement = get_dna_complement("GAGCCTACTAACGGGAT");
	cout << "DNA Complement:     " << dna_complement << endl;

	auto transcribe_dna = transcribe_dna_into_rna("CATCGTAATGACGG");
	cout << "RNA Transcription:  " << transcribe_dna << endl;

	auto gc_content = get_gc_content("CCACCCTCGTGGTATGGCTAGGCATTCAGGAACCGGAGAACGCTTCAGACCAGCCCGGACTGGGAACCTGCGGGCAGTAGGTGGAAT");
	cout << "GC Content:         " << endl;
	cout << gc_content << endl;
	cout << " \nPress any key \n";
	std::cin.ignore();

	return 0;
}