//Experiment 3
//Problem 3

#include <iostream>
#include <conio.h>

using namespace std;

int main ()

{
	char character[10];
	int size, a;
	
	cout << "Enter array size ";
	cin >> size;
	
	for (a=0; a<size; a++)
	{
		cin >> character[a];
	}
	
	cout << "The array size is  " << size <<endl;
	cout << "The reverser array is ";
	
	for (a=size; a=0; a++)
	{
		cout << character[a-1] << " ";
	}
	
	_getch ();
	return 0;	
}
