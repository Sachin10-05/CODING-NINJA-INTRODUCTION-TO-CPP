//                                                                  Sum of Even Numbers till N
//                                                                  **************************
/*
Problem:
-------

Given a number N, print sum of all even numbers from 1 to N.
Sample Input 1 :
 6
Sample Output 1 :
12
*/

//*********************************************************************************************************************************************************************
//Solution:

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int sum = 0;
	for(int i=1;i<=N;i++)
	{
		if(i%2 == 0)
			sum += i;
	}
	cout << sum;
}









