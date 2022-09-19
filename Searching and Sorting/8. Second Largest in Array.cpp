/*
Problem
-------
You have been given a random integer array/list(ARR) of size N. You are required to find and return the second largest element present in the array/list.
If N <= 1 or all the elements are same in the array/list then return -2147483648 or -2 ^ 31(It is the smallest value for the range of Integer)

Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
Time Limit: 1 sec


Sample Input 1:
1
7
2 13 4 1 3 6 28
Sample Output 1:
13


Sample Input 2:
2
2
6 6
4
90 8 90 5
Sample Output 2:
-2147483648
8
*/







//********************************************************************************************************************************************************************


//solution-1
//T.C = O(N)
*************


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
   while (t--)
   {
      int size;
      cin >> size;
      int *input = new int[size];
      for (int i = 0; i < size; i++)
      {
         cin >> input[i];
      }

      cout << findSecondLargest(input, size) << endl;
      delete[] input;
   }
   return 0;
}








**************************************************************************************************************************************************************************











