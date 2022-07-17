/*
Problem
-------
You have been given an integer array/list(ARR) of size N. It has been sorted(in increasing order) and then rotated by some number 'K' in the right hand direction.
Your task is to write a function that returns the value of 'K', that means, the index from which the array/list has been rotated.

Sample Input 1:
1
6
5 6 1 2 3 4
Sample Output 1:
2

Sample Input 2:
2
5
3 6 8 9 10
4
10 20 30 1
Sample Output 2:
0
3
*/


//********************************************************************************************************************************************************************
//SOLUTION



#include<bits/stdc++.h>
using namespace std;

int arrayRotateCheck(int *arr,int size)
{
	int d=1;
	for(int i=0;i<size-1;i++)
	{
		if(arr[i+1] > arr[i])
			d++;
		else
			break;
	}
	if(d==size || size==0)
		return 0;
	else
		return d;	
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
		
		cout << arrayRotateCheck(arr, size) << endl;
		delete[] arr;
	}
	return 0;
}


