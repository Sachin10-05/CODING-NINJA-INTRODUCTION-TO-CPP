//                                                                    STAR PATTERN
//                                                                    ************

/*
Problem:

Print the following pattern.
For N=4
   *
  ***
 *****
*******
*/

//************************************************************************************************************************************************************************
//Solution:

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin >> N;
	for(int i=1;i<=N;i++)
	{
		for(int j=N-i;j>=1;j--)
		{
			cout << " ";
		}
		
		for(int k=1;k<2*i;k++)
		{
			cout << "*";
		}
		cout << "\n";
	}
}









