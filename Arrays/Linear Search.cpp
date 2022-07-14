/*
Problem
-------
You have been given a random integer array/list(ARR) of size N, and an integer X. You need to search for the integer X in the given array/list using 'Linear Search'.
You have been required to return the index at which X is present in the array/list. If X has multiple occurrences in the array/list, then you need to 
return the index at which the first occurrence of X would be encountered. In case X is not present in the array/list, then return -1.

Sample Input 1:
1
7
2 13 4 1 3 6 28
3
Sample Output 1:
4

Sample Input 2:
2
7
2 13 4 1 3 6 28
9
5
7 8 5 9 5      
5
Sample Output 2:
-1
2

*/














//Solution
-----------
  
#include<bits/stdc++.h>
using namespace std;

int linearSearch(int arr[],int N,int val)
{
	for(int i=0;i<N;i++)
	{
		if(arr[i]==val)
			return i;
	}
	return -1;
}






int main()
{
	int T;           //No of test cases
	cin >> T;
	
	for(int i=0;i<T;i++)
	{
		int N;      //size of array
		cin >> N;
		
		int arr[N];
		for(int i=0;i<N;i++)
		{
			cin >> arr[i];
		}
		int val;
		cin >> val;
		
		cout << linearSearch(arr,N,val);
	}
}










