#include<iostream>
#include "5.h"
using namespace std;

	Array :: Array()
	{
		size=5;
		array = new int[size];
		int ini=1;
		for(int i=0; i<size; i++)
		{
			array[i]=ini;
			ini++;
		}	
	}
	
	// Parameterized constructor
	Array ::  Array(int size){
		this->size=size;
		array = new int[size];
		int ini=1;
		for(int i=0; i<size; i++){
			array[i]=ini;
			ini+=5;
		}
	}
	
	// Constructor for creating array from an existing array
	Array ::  Array(int* arr, int size) {
		this->size=size;
		array=new int[size];
		for(int i=0; i<size; i++){
			array[i]=arr[i];
		}
	}
	
	// Copy constructor
	Array :: Array(const Array& arr) {
		size=arr.size;
		array=new int[arr.size];
		for(int i=0; i<size; i++){
			array[i] = arr.array[i];
		}
	}
	
	// Overloaded [] operator for array access
	int& Array :: operator[](int i){
		return array[i];
	}
	
	// Overloaded assignment operator
	const Array& Array :: operator=(const Array& arr){
		if(this == &arr) return *this; // Self-assignment check
		delete[] array; // Deallocate memory for existing array
		size = arr.size;
		array = new int[arr.size];
		for(int i=0; i<size; i++){
			array[i] = arr.array[i];
		}
		return *this;
	}
	
	// Overloaded + operator for array addition
	Array Array :: operator+(const Array & arr){
		Array result(size);
		for(int i=0; i<size; i++){
			result.array[i] = array[i] + arr.array[i];
		}
		return result;
	}
	
	
	// Overloaded - operator for array substraction
	Array Array :: operator-(const Array & arr){
		Array result(size);
		for(int i=0; i<size; i++){
			result.array[i] = array[i] - arr.array[i];
		}
		return result;
	}
	
	Array Array :: operator++()
	{
		for(int i=0;i<size;i++)
		{
			array[i]=array[i]+1;
		}
		return *this;
	}
	
	Array Array :: operator++(int a)
	{
		for(int i=0;i<size;i++)
		{
			array[i]=array[i]+a;
		}
		return *this;
	}
	
	
	Array Array ::  operator--(int a)
	{
		for(int i=0;i<size;i++)
		{
			array[i]=array[i]-a;
		}
		return *this;
	}
	
//	bool operator--(const Array& arr)const{
	bool Array :: operator==(const Array& arr)const{
		if(size!=arr.size)
		return false;
		for(int i=0;i<size;i++)
		{
			if(array[i]!=arr.array[i])
			return false;
		}
		return true;
	}
	
	
	bool Array ::  operator! ()
	{
		if(size==0)
		return true;
		return false;
	}
	
	
	void Array ::  operator+=(const Array& arr)
	{
		Array result(size);
		for(int i=0; i<size; i++){
			result.array[i] = array[i] + arr.array[i];
		}
		cout<<"{";
		for(int i=0;i<size;i++)
		cout<<result[i]<<", ";
		cout<<"}"<<endl;
	}
	
	
	void Array ::  operator-=(const Array& arr)
	{
		Array result(size);
		for(int i=0; i<size; i++){
			result.array[i] = array[i] - arr.array[i];
		}
		cout<<"{";
		for(int i=0;i<size;i++)
		cout<<" "<<result[i]<<" ";
		cout<<"}"<<endl;
	}
	
	int Array ::  operator()(int idx, int val) {
    if (idx < 0 || idx >= size) // Check if idx is valid
        return -1; // Return -1 for invalid idx
    if (array[idx] == val) { // Check if value val is present at idx
        for (int i = idx; i < size - 1; i++) {
            array[i] = array[i + 1]; // Shift elements to the left
        }
        size--; // Update size
        return 1; // Return 1 for successful deletion
    }
    return -1; // Return -1 if value val is not found at idx
}

	void Array ::  print()
	{
		Array result(size);
		cout<<"{";
		for(int i=0;i<size;i++)
		cout<<" "<<array[i]<<" ";
		cout<<"}"<<endl;
	}
		
		ostream& operator<<(ostream& os, const Array& arr){
		os << "{";
		for(int i=0; i<arr.size; i++){
			os << " " << arr.array[i] << " ";
			if(i != arr.size - 1) os << ",";
		}
		os << "}";
		return os;
	}

	istream& operator>>(istream& is, Array& arr)
	{
		cout << "Enter the size of the array: ";
		is >> arr . size;
		arr.array = new int[arr.size];
		cout << "Enter the elements of the array: \n";
		for(int i=0; i<arr.size; i++)
		{
			is >> arr.array[i];
		}
		cout << endl;
		return is;
	}
	
	// Destructor
	Array ::  ~Array(){
		delete[] array;
	}
	
	

	
	
