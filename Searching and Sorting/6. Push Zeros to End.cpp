/*
Problem
-------
You have been given a random integer array/list(ARR) of size N. You have been required to push all the zeros that are present in the array/list to the end of it.
Also, make sure to maintain the relative order of the non-zero elements.

Note:
    * Change in the input array/list itself. You don't need to return or print the elements.
    * You need to do this in one scan of array only. Don't use extra space.
    
Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
Time Limit: 1 sec


Sample Input 1:
1
7
2 0 0 1 3 0 0
Sample Output 1:
2 1 3 0 0 0 0
Explanation for the Sample Input 1 :
All the zeros have been pushed towards the end of the array/list. Another important fact is that the order of the non-zero elements have been 
maintained as they appear in the input array/list.
*/





//*************************************************************************************************************************************************************************


//solution-1
*************

using two-pointer algorithm:-
void pushZeroesEnd(int *arr, int n)
{
    int i = 0;
    for(int j=0;j<n;j++)
    {
        if(arr[j] != 0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
    }
}






******************************************************************************************************************************************************************************



//solution-2
*************

#include<bits/stdc++.h>
using namespace std;
void pushZeroesEnd(int *input, int size)
{
    //Write your code here
    int k=0;
    for(int i=0;i<size;i++)
    {
        if(input[i] != 0)
        {
            input[k] = input[i];
            k++;
        }
    }
    
    for(int i=k;i<size;i++)
        input[i] = 0;
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
      for(int i = 0; i < size; i++)
      {
         cin >> input[i];
      }
      
      pushZeroesEnd(input, size);

      for(int i = 0; i < size; i++)
      {
         cout << input[i] << " ";
      }
      cout << endl;
      delete[] input;
   }
   return 0;
}






****************************************************************************************************************************************************************************















