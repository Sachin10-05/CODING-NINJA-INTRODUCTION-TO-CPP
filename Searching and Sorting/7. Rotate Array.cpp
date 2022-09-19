/*
Problem
-------
You have been given a random integer array/list(ARR) of size N. Write a function that rotates the given array/list by D elements(towards the left).

Note: * Change in the input array/list itself. You don't need to return or print the elements.

Constraints :
1 <= t <= 10^4
0 <= N <= 10^6
0 <= D <= N
Time Limit: 1 sec


Sample Input 1:
1
7
1 2 3 4 5 6 7
2
Sample Output 1:
3 4 5 6 7 1 2
*/






//******************************************************************************************************************************************************************************


//solution-1 (best soln)
************************


void rotate(int *arr, int k, int n)
{
   int temp[n];
   for(int i=0;i<n;i++)
   {
      temp[i] = arr[(i+k) % n];
   }
    
   //copy array
   for(int i=0;i<n;i++)
   {
      arr[i] = temp[i];
   }
}





*****************************************************************************************************************************************************************************



//solution-2
*************

#include<bits/stdc++.h>
using namespace std;

void rotate(int *input, int d, int n)
{
   int arr[d];        
   for(int i=0;i<d;i++)
   {
      arr[i] = input[i];
   }
    
   int k = d;
   for(int i=0;i<n-d;i++)
   {
      input[i] = input[k];
      k++;
   }
    
   int x = 0;
   for(int i=n-d;i<n;i++)
   {
      input[i] = arr[x];
      x++;
   }
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
      int d;
      cin >> d;

      rotate(input, d, size);

      for (int i = 0; i < size; ++i)
      {
         cout << input[i] << " ";
      }
      delete[] input;
      cout << endl;
   }
   return 0;
}






**************************************************************************************************************************************************************************
































