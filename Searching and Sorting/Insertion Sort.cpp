/*
Provided with a random integer array/list(ARR) of size N, you have been required to sort this array using 'Insertion Sort'.
Sample Input 1:
1
7
2 13 4 1 3 6 28
Sample Output 1:
1 2 3 4 6 13 28

Sample Input 2:
2
5
9 3 6 2 0
4
4 3 2 1
Sample Output 2:
0 2 3 6 9
1 2 3 4 
*/


//******************************************************************************************************************************************************************
//SOLUTION


#include<bits/stdc++.h>
using namespace std;

void insertionSort(int *arr,int size)
{
	for(int i=1;i<size;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(arr[j] > arr[i])
			{
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
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
		insertionSort(arr,size);
		
		for(int i=0;i<size;i++)
		{
			cout << arr[i] << " ";
		}
		delete[] arr;
		cout << endl;
	}
	return 0;
}

