/*
problem:
--------
You are given an integer array/list(ARR) of size N. It contains only 0s, 1s and 2s. Write a solution to sort this array/list in a 'single scan'.
'Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
Time Limit: 1 sec


Sample Input 1:
1
7
0 1 2 0 2 0 1
Sample Output 1:
0 0 0 1 1 2 2 
*/


//********************************************************************************************************************************************************************


//solution
//T.C = O(N)
//using two-pointer algorithms
********************************


//two-ppointer algorithm
void sort012(int *arr, int n)
{
    int i=0;
    int mid = 0;
    int j = n-1;
    while(mid <= j)
    {
	//case-1
        if(arr[mid] == 0)
        {
            swap(arr[i], arr[mid]);
            i++;
            mid++;
        }
        
	//case-2
        else if(arr[mid] == 1)
        {
            mid++;
        }
        
	//case-3
        else if(arr[mid] == 2)
        {
            swap(arr[mid], arr[j]);
            j--;
        }
    }
}






*****************************************************************************************************************************************************************************


//solution
//T.C = O(N)
//counting Approach
********************

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






********************************************************************************************************************************************************************************















