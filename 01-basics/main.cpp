#include<iostream>
#include "basics.h"

using std::cout;
using namespace::std;

void func()
{
	//dynamic memory allocation-allocated on the heap
	int* ptr_n = new int(5);  //new int calls to the heap, ptr_n stored on stack and points to the heap
	cout << ptr_n;
	///RESPONSIBLE FOR RELEASING THE ALLOCATED MEMORY!!!!
	delete ptr_n;
}
int main()
{

	func();

	/*
	int num{ 5 };
	int& num_ref = num; //reference
	int* ptr_num; //pointer
	ptr_num = &num_ref;


	cout << "Value of num:  " << num << std::endl;
	cout << "Address of num:  " << &num << std::endl;
	cout << std::endl;
	cout << "Value of at address stored by num_ref:  " << num_ref << std::endl;
	cout << "Address stored at num_ref:  " << &num_ref << std::endl;
	cout << std::endl;
	cout << "Value of ptr_num:  " << ptr_num << std::endl;
	cout << "Value of ptr_num (int):  " << (int)ptr_num << std::endl;  //in digital
	cout << "Value of num:  " << *ptr_num << std::endl;
	cout << "Address of ptr_num:  " << &ptr_num; //in HEX
	cout << "Address of ptr_num (int):  " << (int)&ptr_num; //in digital
	cin >> num;*/
	/*
	cout << sum_numbers(5, 5);
	cout << multiply_numbers(5, 5);
	*/
	return 0;
}
