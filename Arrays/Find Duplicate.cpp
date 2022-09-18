/*
Problem
-------
You have been given an integer array/list(ARR) of size N which contains numbers from 0 to (N - 2). Each number is present at least once. 
That is, if N = 5, the array/list constitutes values ranging from 0 to 3 and among these, there is a single integer value that is present twice. 
You need to find and return that duplicate number present in the array.

Note : Duplicate number is always present in the given array/list.
Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
Time Limit: 1 sec

Sample Input 1:
1
9
0 7 2 5 4 7 1 3 6
Sample Output 1:
7

Sample Input 2:
2
5
0 2 1 3 1
7
0 3 1 5 4 3 2
Sample Output 2:
1
3
*/




*********************************************************************************************************************************************************************************

//Solution-1
*************

//Time complexity: O(N)
//using XOR operator

int duplicateNumber(int *arr,int size)
{
    int ans = 0;
    for(int i=0;i<size;i++)
    {
        ans = ans ^ arr[i];
    }
    
    for(int i=0;i<size-1;i++)
    {
        ans = ans ^ i;
    }
    return ans;
}





************************************************************************************************************************************************************************************

//solution-2
*************

//Time complexity: O(N^2)
//Brute-Force Approach

/*
#include<bits/stdc++.h>
using namespace std;
int duplicateNumber(int *arr,int size)
{
   for(int i=0;i<size;i++)
   {
      for(int j=i+1;j<size;j++)
      {
         if(arr[i] == arr[j])
	 return arr[i];	
      }	
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
      for (int i = 0; i < size; i++)
      {
         cin >> input[i];
      }
      cout << duplicateNumber(input, size) << endl;
   }
   return 0;
}
*/





*****************************************************************************************************************************************************************************


















