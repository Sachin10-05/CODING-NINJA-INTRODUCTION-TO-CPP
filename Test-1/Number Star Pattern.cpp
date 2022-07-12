/*
N=5
1234554321
1234**4321
123****321
12******21
1********1
*/



#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin >> N;
	
	for(int i=1;i<=N;i++)
	{
		for(int j=1;j<=N+1-i;j++)
		{
			cout << j << " ";
		}
		
		for(int k=i-1;k>=1;k--)
		{
			cout << "*" << " ";
		}
		
		for(int l=1;l<=i-1;l++)
		{
			cout << "*" << " ";
		}
		
		for(int m=N+1-i;m>=1;m--)
		{
			cout << m << " ";
		}
		cout << "\n";
	}
}


