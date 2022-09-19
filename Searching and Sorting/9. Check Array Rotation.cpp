/*
Problem
-------
You have been given an integer array/list(ARR) of size N. It has been sorted(in increasing order) and then rotated by some number 'K' in the right hand direction.
Your task is to write a function that returns the value of 'K', that means, the index from which the array/list has been rotated.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
Time Limit: 1 sec

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


//solution-1
**************



#include<bits/stdc++.h>
using namespace std;

int arrayRotateCheck(int *arr, int n)
{
   int k=0;
   for(int i=0;i<n-1;i++)
   {
      if(arr[i] > arr[i+1])
         return (k+1);
      k++;
   }
   return 0;
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
      cout << arrayRotateCheck(input, size) << endl;
      delete[] input;
   }
   return 0;
}








******************************************************************************************************************************************************************************


























