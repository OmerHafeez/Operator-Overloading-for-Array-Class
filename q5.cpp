#include "5.h"
#include<iostream>
using namespace std;



int main(){
	// Create Array objects using different constructors
	Array arr1; // Default constructor
	Array arr2(5); // Parameterized constructor with size 5
	cout<<"arr1 : "<<endl;
	arr1.print();
	cout<<"arr2 : "<<endl;
	arr2.print();
	int initialArray[] = {2, 4, 6, 8, 10};
	Array arr3(initialArray, 5); // Constructor with existing array
	cout<<"arr3 : "<<endl;
	arr3.print();
	Array arr4 = arr2; // Copy constructor
	cout<<"arr4 : "<<endl;
	arr4.print();
	// Accessing elements of arrays using overloaded [] operator
	cout << "arr1[2]: " << arr1[2] << endl;
	cout << "arr2[4]: " << arr2[4] << endl;
	
	// Modifying arrays using overloaded operators
	arr1 = arr1 + arr2; // Addition operator
	arr3 = arr3 - arr4; // Subtraction operator
	cout<<"arr1 = arr1 + arr2"<<endl;
	arr1.print();
	cout<<"arr3 = arr3 - arr4"<<endl;
	arr3.print();
	
	arr2++; // Post-increment operator
	

	
	if (arr1 == arr2) // Equality operator
		cout << "arr1 and arr2 are equal" << endl;
	else
		cout << "arr1 and arr2 are not equal" << endl;
	
	if (!arr3) // Negation operator
		cout << "arr3 is empty" << endl;
	else
		cout << "arr3 is not empty" << endl;
	
	// Compound assignment operators
	arr1 += arr2; // Addition assignment operator
	cout<<"arr1 += arr2"<<endl;
	arr1.print();
	arr3 -= arr4; // Subtraction assignment operator
	cout<<"arr3 -= arr4"<<endl;
	arr3.print();
	arr1(2, 100); // Custom function to update element at index 2 with value 100
	
	
	cout << endl;
	cout << "Insertion: \n";
	Array A9;
	cin >> A9;	

	cout << "Excertion: \n";
	cout << A9;
	
	cout << endl;
	return 0;
}
