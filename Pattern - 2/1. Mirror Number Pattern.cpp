//                                                                      MIRROR NUMBER PATTERN
//                                                                      *********************

/*
Problem:
--------
for N=5
  *
 ***
*****
 ***
  *
  
  */
//***********************************************************************************************************************************************************************
//Solution:

#include<iostream>
using namespace std;

int main()
{
	int i = 1, j, k, rows;
    char ch;
     
    cin >> rows;
    int N = (rows/2) + 1;


    while(i <= N)
    {
        j = 1;
    	while( j <= N - i)
		{
            cout << " ";
            j++;
        }
        k = 1;
        while( k <= i * 2 - 1)
        {
            cout << "*";
            k++;
        }
        cout << endl;
        i++;
    }	




    i = N - 1;
    while( i > 0)
    {
    	j = 1;
    	while( j <= N - i)
		{
            cout << " ";
            j++;
        }
        k = 1;
        while( k <= i * 2 - 1)
        {
            cout << "*";
            k++;
        }
        cout << endl;
        i--;
    }	
}
