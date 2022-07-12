/*
N=4

   1
  212
 32123
4321234
*/



#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin >> N;
	
	for(int i=1;i<=N;i++)           //rows
	{
		for(int j=1;j<=N-i;j++)     //columns
		{
			cout << " " << " ";
		}
		
		
		int x = i;
		for(int k=i;k>=1;k--)
		{
			cout << x << " ";
			x--;	
		}
		
		for(int l=2;l<=i;l++)
		{
			cout << l << " ";
		}
		cout << "\n";
	}
}






