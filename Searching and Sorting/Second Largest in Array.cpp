/*
Problem
-------
You have been given a random integer array/list(ARR) of size N. You are required to find and return the second largest element present in the array/list.
If N <= 1 or all the elements are same in the array/list then return -2147483648 or -2 ^ 31(It is the smallest value for the range of Integer)

Sample Input 1:
1
7
2 13 4 1 3 6 28
Sample Output 1:
13

Sample Input 2:
1
5
9 3 6 2 9
Sample Output 2:
6

Sample Input 3:
2
2
6 6
4
90 8 90 5
Sample Output 3:
-2147483648
8

*/

//********************************************************************************************************************************************************************
//SOLUTION:



#include<bits/stdc++.h>
using namespace std;

int findSecondLargest(int*arr,int size)
{
	int max = INT_MIN;
	int secMax = INT_MIN;
	if(size<=1)
		return INT_MIN;
	for(int i=0;i<size;i++)
	{
		if(arr[i] > max)
		{
			secMax = max;
			max = arr[i];
		}
		else if(arr[i] > secMax  && arr[i] < max)
		{
			secMax = arr[i];
		}
	}
	return secMax;	
}










int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int size;
		cin >> size;
		int *arr = new int[size];
		for(int i=0;i<size;i++)
		{
			cin >> arr[i];
		}
		
		cout << findSecondLargest(arr,size);
		delete[] arr;
	}
	return 0;
}





















