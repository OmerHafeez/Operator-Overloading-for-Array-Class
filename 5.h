#ifndef ARRAY_H_
#define ARRAY_H_

#include<iostream>
using namespace std;

class Array
{
	int size;
	int* array;
public:
	// Default constructor
	Array();
	// Parameterized constructor
	Array(int size);
	// Constructor for creating array from an existing array
	Array(int* arr, int size);
	// Copy constructor
	Array(const Array& arr) ;
	// Overloaded [] operator for array access
	int& operator[](int i);
	// Overloaded assignment operator
	const Array& operator=(const Array& arr);
	// Overloaded + operator for array addition
	Array operator+(const Array & arr);
	// Overloaded - operator for array substraction
	Array operator-(const Array & arr);
	Array operator++();
	Array operator++(int a);
	Array operator--(int a);
//	bool operator--(const Array& arr)const{
	bool operator==(const Array& arr)const;
	bool operator! ();
	
	void operator+=(const Array& arr);
	
	void operator-=(const Array& arr);
	
	int operator()(int idx, int val) ;

	void print();
	friend ostream& operator<<(ostream& os, const Array& arr);
	friend istream& operator>>(istream& is, Array& arr);
	// Destructor
	~Array();
};

#endif /*ARRAY_H_*/

