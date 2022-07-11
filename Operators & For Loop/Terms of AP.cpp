/*
Problem
-------
Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
Sample Input 1 :
10
Sample Output 1 :
5 11 14 17 23 26 29 35 38 41

Sample Input 2 :
4
Sample Output 2 :
5 11 14 17
*/






//Solution
----------
  
#include<iostream>
using namespace std;

int main() 
{
    int N;        // No of Terms
    cin >> N;
    
    int count=1;
    int i=1;
    while(count<=N)
    {
    	int s= (3*i)+2;
    	if(s%4 != 0)
    	{
    		cout << s << " ";
    		count++;
		}
		i++;
	}
}
