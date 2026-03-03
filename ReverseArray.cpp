//This program takes an array of integers and reverses the order of the array. It then prints both the original and the reversed arrays.
using namespace std;
#include <iostream>
// Function to reverse an array
//Input: An array of integers and the number of items in the array
//Precondition: The array must have at least one item and the size must be greater than 0
//Postcondition: Returns a new array with the items in reverse order
int* ReverseArray(const int arr[], int size)
{
	int* reversedArray = new int[size];
	for (int i = 0; i < size; i++)
	{
		reversedArray[i] = arr[size - 1 - i];
	}
	return reversedArray;
}
// Function to print an array
//Input: An array of integers and the number of items in the array
//Precondition: The array must have at least one item and the size must be greater than 0
//Postcondition: The contens of the array are printed to the console
void print(const int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* newArr = ReverseArray(arr, 5);
	cout << "Original array: ";
	print(arr, 5);
	cout << "Reversed array: ";
	print(newArr, 5);
	delete[] newArr; //Delete array created by ReverseArray to prevent memory leak
}
