/*
Problem
-------
You have been given a random integer array/list(ARR) of size N. Write a function that rotates the given array/list by D elements(towards the left).
Sample Input 1:
1
7
1 2 3 4 5 6 7
2
Sample Output 1:
3 4 5 6 7 1 2

Sample Input 2:
2
7
1 2 3 4 5 6 7
0
4
1 2 3 4
2
Sample Output 2:
1 2 3 4 5 6 7
3 4 1 2
*/

//********************************************************************************************************************************************************************
//SOLUTION:



#include<bits/stdc++.h>
using namespace std;

void rotate(int *arr,int d,int size)
{
	int temp[d];    //temp array of size d
	for(int i=0;i<d;i++)
	{
		temp[i] = arr[i];	
	}	
	
	int k=d;
	for(int i=0;i<size-d;i++)
	{
		arr[i] = arr[k];
		k++;
	}
	
	int x = 0;
	for(int i=size-d;i<size;i++)
	{
		arr[i] = temp[x];
		x++;
	}
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
		int d;
		cin >> d;
		
		rotate(arr,d,size);
		for(int i=0;i<size;i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete[] arr;
	}
	return 0;
}

























