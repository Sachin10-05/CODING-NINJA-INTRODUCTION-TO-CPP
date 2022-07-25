/*
Given an integer array A of size n. Find and print all the leaders present in the input array. An array element A[i] is called Leader, 
if all the elements following it (i.e. present at its right) are less than or equal to A[i].
Print all the leader elements separated by space and in the same order they are present in the input array.
Sample Input 1 :
6
3 12 34 2 0 -1
Sample Output 1 :
34 2 0 -1

Sample Input 2 :
5
13 17 5 4 6
Sample Output 2 :
17 6
*/

//******************************************************************************************************************************************************************


#include<bits/stdc++.h>
using namespace std;
void Leaders(int *arr,int size)
{
	int i;
	for(i=0;i<size-1;i++)
	{
		bool check = true;
		for(int j=i+1;j<size;j++)
		{
			if(arr[i] > arr[j])
				check = true;
			else
			{
				check = false;
				break;
			}
		}
		if(check)
			cout << arr[i] << " ";
	}
	cout << arr[i];
}





int main()
{
	int size;
	cin >> size;
	
	int *arr = new int[size];
	for(int i=0;i<size;i++)
	{
		cin >> arr[i];
	}
	Leaders(arr,size);
	return 0;
}


