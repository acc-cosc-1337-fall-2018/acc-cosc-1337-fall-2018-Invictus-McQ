//write include statement for vectors header
//write include statement for cout object
#include "vectors.h"
#include<iostream>
#include<vector>

using std::vector; using std::cout; using std::endl;



//dont forget using statement for cout object
int main() 
{
	//Write code to call get_max_from_vector with argument
	//vector of values 4, 5, 1, 50, 6, 77, 0 and display max

	vector <int> v1 = { 4, 5, 1, 50, 6, 77, 0 };
	cout << "Max Value:  " << get_max_from_vector(v1) << endl;


	//write code to call the sum_of_square function with argument
	//vector of values 2, 3, 4 and display result

	vector<int> v2 = { 2, 3, 4 };
	cout << "Sum of Squares:  " << sum_of_squares(v2) << endl;


	//write code to call the replace function with argument 
	//vector of strings "Joe", "joe", "mary", old argument "joe", new argument "John"

	vector<string> v_strings = { "Joe", "joe", "mary" };
	replace(v_strings, "joe", "John");


	
	//write code to call is_prime with value 3 output result

	cout  << "Is the number 3 prime?  "  << is_prime(3) << "\n";


	//write code to call vector_of_primes, save return value to a vector of ints
	//output each int in the return vector

	vector<int> primes_to_10 = vector_of_primes(10);
	cout << "\n";
	cout << "Primes from 1 to 10:  " << "\n";
		for (int i = 0; i <= primes_to_10.size(); i++) {
			cout << primes_to_10[i] << endl;
		}
	vector<int> primes_to_50 = vector_of_primes(50);
	cout << "\n";
	cout << "\n";
	cout << "Primes from 1 to 50:  " << "\n";
	for (int i = 0; i <= primes_to_50.size(); i++) {
		cout << primes_to_50[i] << "\n";
	}
	 	return 0;
}