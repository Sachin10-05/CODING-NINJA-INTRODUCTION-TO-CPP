/*
Problem
-------
Given a number N, find its square root. You need to find and print only the integral part of square root of N.
Sample Input 1 :
10
Sample Output 1 :
3

Sample Input 2 :
4
Sample Output 2 :
2
*/




//Solution
----------
  
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	int s;
	double error = 0.00001;
    s = N;
	
	if(N<=0)
		cout << 0;
	else
	{
		while ((s - N / s) > error) 
    	{
        	s = (s + N / s) / 2;
    	}
    	cout << s;
    }
    
    
    /*
    int res = sqrt(N);
	cout << res;
    */
}

