/*
Problem:
--------
You have been given an integer array/list(ARR) of size N. Where N is equal to [2M + 1].
Now, in the given array/list, 'M' numbers are present twice and one number is present only once.
You need to find and return that number which is unique in the array/list.

Sample Input 1:
1
7
2 3 1 6 3 6 2
Sample Output 1:
1

Sample Input 2:
2
5
2 4 7 2 7
9
1 3 1 3 6 6 7 10 7
Sample Output 2:
4
10
*/










//Solution:
-----------
  

//Time complexity : O(N)


#include<bits/stdc++.h>
using namespace std;

int findUnique(int *arr,int size)
{
	if(size==1)
		return arr[0];
	else
	{
		int res = arr[0];
		for(int i=1;i<size;i++)
		{
			res = res ^ arr[i];     //using XOR operator
		}
		return res;
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
		
		cout << findUnique(arr,size) << endl;
	}
	return 0;
}

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
