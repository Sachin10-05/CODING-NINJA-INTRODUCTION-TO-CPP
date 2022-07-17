/*
Problem
-------
You have been given a random integer array/list(ARR) of size N. You have been required to push all the zeros that are present in the array/list to the end of it.
Also, make sure to maintain the relative order of the non-zero elements.

Sample Input 1:
1
7
2 0 0 1 3 0 0
Sample Output 1:
2 1 3 0 0 0 0
Explanation for the Sample Input 1 :
All the zeros have been pushed towards the end of the array/list. Another important fact is that the order of the non-zero elements have been 
maintained as they appear in the input array/list.

Sample Input 2:
2
5
0 3 0 2 0
5
9 0 0 8 2
Sample Output 2:
3 2 0 0 0
9 8 2 0 0 

*/

//*******************************************************************************************************************************************************************
//SOLUTION:



#include<bits/stdc++.h>
using namespace std;

void pushZeroesEnd(int *arr,int size)
{
	int k=0;
	for(int i=0;i<size;i++)
    {
        if(arr[i] != 0)
        {
            arr[k] = arr[i];
            k++;
        }
    }
    for(int i=k;i<size;i++)
        arr[i] = 0;
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
		
		pushZeroesEnd(arr,size);
		for(int i=0;i<size;i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
		delete[] arr;
	}
	return 0;
}










