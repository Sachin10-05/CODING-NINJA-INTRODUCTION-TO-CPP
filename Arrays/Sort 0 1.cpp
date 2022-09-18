/*
Problem
-------
You have been given an integer array/list(ARR) of size N that contains only integers, 0 and 1. Write a function to sort this array/list. 
Think of a solution which scans the array/list only once and don't require use of an extra array/list.

Note: You need to change in the given array/list itself. Hence, no need to return or print anything. 
Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
Time Limit: 1 sec

Sample Input 1:
1
7
0 1 1 0 1 0 1
Sample Output 1:
0 0 0 1 1 1 1

Sample Input 2:
2
8
1 0 1 1 0 1 0 1
5
0 1 0 1 0
Sample Output 2:
0 0 0 1 1 1 1 1
0 0 0 1 1 
*/





//************************************************************************************************************************************************************************


//Solution:
***********

//Time complexity: O(N)

#include<bits/stdc++.h>
using namespace std;
void sortZeroesAndOne(int *arr,int size)
{
   int count = 0;
   for(int i=0;i<size;i++)
   {
      if(arr[i] == 0)
      count++;
   }
   for(int i=0;i<count;i++)
      arr[i] = 0;
   for(int i=count;i<size;i++)
      arr[i] = 1;
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
      for (int i = 0; i < size; ++i)
      {
         cin >> input[i];
      }
      sortZeroesAndOne(input, size);
      for (int i = 0; i < size; ++i)
      {
         cout << input[i] << " ";
      }
      cout << endl;
      delete[] input;
   }
   return 0;
}


