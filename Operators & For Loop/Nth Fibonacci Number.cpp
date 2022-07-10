//                                                                 Nth FIBONACCI NUMBER
//                                                                 ********************

/*
Problem
-------
Nth term of Fibonacci series F(n), where F(n) is a function, is calculated using the following formula -
    F(n) = F(n-1) + F(n-2), 
    Where, F(1) = F(2) = 1
    
Sample Input 1:
6
Sample Output 1:
8
*/

//*******************************************************************************************************************************************************************
//Solution:

//using iteration:
//---------------

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int first = 0;
	int last = 1;
	int res;
	for(int i=1;i<N;i++)
	{
		res = first + last;
		first = last;
		last = res;
	}
	cout << last;
}
*/

















//using recursion:
//---------------

/*
#include<bits/stdc++.h>
using namespace std;

int fibo(int N)
{
	if(N==0)
		return 0;
	else if(N==1)
		return 1;
	return fibo(N-1) + fibo(N-2);	
}

int main()
{
	int N;
	cin >>  N;
	cout << fibo(N);
}
*/


