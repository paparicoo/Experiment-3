//Experiment 3
//Problem 1 

#include <iostream>
#include <conio.h>

using namespace std;

int main()

{

int array[10], a, sum, average;
sum = 0;

cout << "Enter integers: ";

for (a=0; a<10; a++)
    {
	cin >> array[a];
	
    } 
 
 cout << endl;
 
 for (a=0; a<10; a++)
 {
 	sum= sum + array[a];
 	average= sum/10;
 	
 }
 
 cout << "The sum of the 10 integers is: " << sum << endl;
 cout << "The average of the 10 itegers is: " << average << endl;
 
 _getch ();
 return 0;

}
