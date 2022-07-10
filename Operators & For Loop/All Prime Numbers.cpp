//                                                                  ALL PRIME NUMBER
//                                                                  ****************


/*
Problem
-------
Sample Input 1:
9
Sample Output 1:
2
3
5
7

Sample Input 2:
20
Sample Output 2:
2
3
5
7
11
13
17
19
*/



//********************************************************************************************************************************************************************
//Solution:

METHOD-1
--------

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin >> N;
	
	bool ans;
	for(int i=2;i<=N;i++)
	{
		ans=true;
		for(int j=2;j<i;j++)
		{
			if(i%j == 0)
			{
				ans=false;
				break;
			}
		}
		if(ans)
			cout << i << " ";
	}	
}
*/	

 //******************************************************************************************************************************************************************
  
  METHOD-2
  --------
  
  
#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	int i=2;
	bool flag;
	while(i<=N)
	{
		flag = false;
		for(int j=2;j<i;j++)
		{
			if(i%j == 0)
			{
				flag = true;
				break;
			}
		}
	
		if(!flag)
		{
			cout << i << endl;
		}
		i++;
	}
}





























