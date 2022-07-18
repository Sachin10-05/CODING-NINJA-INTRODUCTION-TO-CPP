/*
You are given an integer array/list(ARR) of size N. It contains only 0s, 1s and 2s. Write a solution to sort this array/list in a 'single scan'.
'Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.

Sample Input 1:
1
7
0 1 2 0 2 0 1
Sample Output 1:
0 0 0 1 1 2 2 

Sample Input 2:
2
5
2 2 0 1 1
7
0 1 2 0 1 2 0
Sample Output 2:
0 1 1 2 2 
0 0 0 1 1 2 2

*/


//********************************************************************************************************************************************************************
//SOLUTION:



#include<bits/stdc++.h>
using namespace std;
void sort012(int *arr,int size)
{
	int x1=0;
	int x2=0;
	int x3=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i] == 0)
			x1++;
		else if(arr[i] == 1)
			x2++;
		else
			x3++;	
	}
	
	for(int i=0;i<x1;i++)
	{
		arr[i] = 0;	
	}
	for(int i=x1;i<x1+x2;i++)
	{
		arr[i] = 1;	
	}
	for(int i=x1+x2;i<x1+x2+x3;i++)
	{
		arr[i] = 2;	
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
		sort012(arr,size);
		for(int i=0;i<size;i++)
		{
			cout << arr[i] << " ";
		}
		delete[] arr;
		cout << endl;
	}
	return 0;
}





