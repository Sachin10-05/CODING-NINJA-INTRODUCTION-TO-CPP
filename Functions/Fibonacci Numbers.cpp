/*
Problem
-------
Given a number N, figure out if it is a member of fibonacci series or not. Return true if the number is member of fibonacci series else false.
Fibonacci Series is defined by the recurrence
    F(n) = F(n-1) + F(n-2)
where F(0) = 0 and F(1) = 1

Sample Input 1 :
5
Sample Output 1 :
true

Sample Input 2 :
14
Sample Output 2 :
false    

*/










//Solution



#include<bits/stdc++.h>
using namespace std;



bool checkMember(int n)
{
	if(n==0)
		return true;
	else
  {
    int first = 0;
		int last = 1;
		int sum;
	
		bool res = false;
		for(int i=0;i<=n;i++)
		{
			sum = first + last;
			if(sum == n)
			{
				res = true;
				break;
			}
			first = last;
			last = sum;
		}
		return res;
	}
}


int main()
{
  int n; 
  cin >> n ;
  if(checkMember(n))
  {
	cout << "true" << endl;
  }
  else
  {
    cout << "false" << endl;
  }
}





