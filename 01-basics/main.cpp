#include<iostream>
#include "basics.h"

using std::cout;
using namespace::std;

void func()
{
	//dynamic memory allocation-allocated on the heap
	int* ptr_n = new int(5);  //new int calls to the heap, ptr_n stored on stack and points to the heap
	cout << ptr_n;

	//RESPONSIBLE FOR RELEASING THE ALLOCATED MEMORY!!!!
	delete ptr_n;
}
int main()
{

	//func();

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
		DynamicPtr a;
		DynamicPtr* b = new DynamicPtr;
		std::unique_ptr<DynamicPtr> c = std::make_unique <DynamicPtr>();

		delete b;
		b = nullptr;

		/*std::unique_ptr<MyClass> ptr_cls = std::make_unique <MyClass>();
		ptr_cls->set_ptr_num(50);*/
		/*delete ptr_cls;
		ptr_cls = nullptr;*/
		/*func();
		int num = 10;
		pass_by_pointer(&num);
		cout << num;*/
		/*int num{ 5 };
		int& num_ref = num;
		cout << "Address of num: " << &num << std::endl;
		cout << "Value at address stored by num_ref: " << num_ref << std::endl;
		cout << "Address stored at num_ref: " << &num_ref<<std::endl;
		int* ptr_num = &num_ref;
		cout << "Value pointed to by ptr_num: " << *ptr_num << std::endl;
		cout << "Address of num: " << ptr_num << std::endl;
		cout << "Address of the ptr_num: " << &ptr_num << std::endl;*/

		//const int read_only = 10;
		//read_only = 15;
		//cout << sum_numbers(5, 5);
		//initialize_vector_of_ints();
		//initialize_vector_of_strings();

	return 0;
}
