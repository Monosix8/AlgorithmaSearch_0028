#include <iostream>
using namespace std;

int arr[20]; // Array to be search
int n;		 // Number of elements in the array
int i;		 // Index of array element

void input()
{
	while (true)
	{
		cout << "Enter the number of element in the array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		