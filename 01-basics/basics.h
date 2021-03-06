﻿int sum_numbers(int num1, int num2);

//write function prototype for multiply_numbers with two integer parameters
int multiply_numbers(int num1, int num2);

void pass_by_val_by_ref(int val, int& ref);

void const_pass_by_val_by_ref(int val, const int & ref);

void pass_by_pointer(int* ptr);

void initialize_vector_of_ints();

void initialize_vector_of_strings();

#ifndef MYCLASS_H
#define MYCLASS_H

class MyClass
{
public:
	MyClass();
	MyClass(const MyClass& my_class);
	void set_ptr_num(int val);
	MyClass& operator=(MyClass& other);
	~MyClass();
private:
	int num{ 5 };
	int* ptr_num = new int(10);
};
#endif // !MYCLASS_H



#ifndef DYNAMICPTR_H
#define DYNAMICPTR_H

class DynamicPtr
{
public:
	DynamicPtr();
	~DynamicPtr();
private:
	int* ptr_num;
};
#endif // !DYNAMICPTR_H