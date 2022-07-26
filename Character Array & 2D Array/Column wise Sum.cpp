/*
Given a 2D integer array of size M*N, find and print the sum of ith column elements separated by space.
Sample Input :
4 2 1 2 3 4 5 6 7 8
Sample Output :
16 20
*/



//******************************************************************************************************************************************************************

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int m;  //No of rows
	int n;  //No of columns
	
	cin >> m >> n;
	int arr[m][n];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin >> arr[i][j];
		}
	}
	
  
	for(int i=0;i<n;i++)
	{
		long sum=0;
		for(int j=0;j<m;j++)
		{
			sum += arr[j][i];
		}
		cout << sum << " ";
	}
	return 0;
}














