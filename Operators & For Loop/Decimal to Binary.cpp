/*
Problem
-------
Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Sample Input 1 :
12
Sample Output 1 :
1100

Sample Input 2 :
7
Sample Output 2 :
111
*/



//Solution
----------
 
//********************************************************************************************************************************************************************
//Method-1
----------
  
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin >> N;
	
	string res;
	while(N!=0)
	{
		int rem = N%2;
		if(rem==0)
			res+="0";
		else
			res+="1";
		N=N/2;
	}
	
	for(int i=res.length()-1;i>=0;i--)
	{
		cout << res[i] << "";
	}
}
*/
  
  
//********************************************************************************************************************************************************************
  
//Method-2
----------

#include<iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	string res;
	int rem;
	if(N==0)
		cout << "0";
	else
	{
		while(N != 0)
		{
			rem = (N%2);
			res += (rem==0 ? "0" : "1");
			N=N/2;
		}
		
		/*
		for(int i=res.length()-1; i>=0;i--)
		{
			cout << res[i] << "";
		}
		*/
		
		//algorithm to convert STRING TO INTEGER
		long int x = 0;
		for(int i=0;i<res.length();i++)
		{
			x = x*10 + res[i] - '0';
		}
	}
	
}














