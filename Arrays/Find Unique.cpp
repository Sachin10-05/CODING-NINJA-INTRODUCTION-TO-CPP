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




***********************************************************************************************************************************************************************************

//solution
//Time Complexity: O(N)


#include<bits/stdc++.h>
using namespace std;

int findUnique(int *arr, int size)
{
   int ans = 0;
   for(int i=0;i<size;i++)
   {
      ans = ans ^ arr[i];   //XOR operation
   }
   return ans;
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
      cout << findUnique(input, size) << endl;
   }
   return 0;
}





************************************************************************************************************************************************************************************







