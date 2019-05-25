//Experiment 3
//Problem 2

#include <iostream>
#include <conio.h>

using namespace std;

int main ()
    {
    	int provinceA[7], provinceB[7], provinceC[7], a;
    	
    	for (a=0; a<7; a++)
    	{ 
    	    cout << "Enter the temperature for Province A Day " << a+1 << ": ";
    	    cin >> provinceA[a];
		}
		
		for (a=0; a<7; a++)
		{
			cout << "Enter the temperature for Province B Day " << a+1 << ": ";
			cin >> provinceB[a];
		}
		for (a=0; a<7; a++)
		{
			cout << "Enter the temperature for Province C Day " << a+1 << ": ";
			cin >> provinceC[a];
		}
		
		for (a=0; a<7; a++)
        {
            cout << "Province A, Day" << a+1 << "= ";
            cout << provinceA[a] << endl;
        }
        for (a=0; a<7; a++)
        {
            cout << "Province B, Day " << a+1 << "= ";
            cout << provinceB[a] << endl;
        }
        for (a=0; a<7; a++)
        {
            cout << "Province C, Day" << a+1 << "= ";
            cout << provinceC[a] << endl;
        }
        

    _getch ();
    return 0;
	}
    


