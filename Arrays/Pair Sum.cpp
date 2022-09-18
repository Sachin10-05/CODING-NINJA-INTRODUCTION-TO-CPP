/*
Problem:
--------
You have been given an integer array/list(ARR) and a number X. Find and return the total number of pairs in the array/list which sum to X.
Note: Given array/list can contain duplicate elements.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^3
0 <= X <= 10^9
Time Limit: 1 sec


Sample Input 1:
1
9
1 3 6 2 5 4 3 2 4
7
Sample Output 1:
7

Sample Input 2:
2
9
1 3 6 2 5 4 3 2 4
12
6
2 8 10 5 -2 5
10
Sample Output 2:
0
2
Explanation for Input 2:
Since there doesn't exist any pair with sum equal to 12 for the first query, we print 0.
For the second query, we have 2 pairs in total that sum up to 10. They are, (2, 8) and (5, 5).
*/






**********************************************************************************************************************************************************************************

//solution-1
*************

//Time complexity:O(N^2)

#include<bits/stdc++.h>
using namespace std;
int pairSum(int *arr,int size,int x)
{
   int count= 0;
   for(int i=0;i<size;i++)
   {
      for(int j=i+1;j<size;j++)
      {
         if(arr[i]+arr[j] == x)
	 count++;	
      }	
   }
   return count;	
}


int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int size;
      int x;
      cin >> size;
      int *input = new int[size];
      for (int i = 0; i < size; i++)
      {
         cin >> input[i];
      }
      cin >> x;
      cout << pairSum(input, size, x) << endl;
      delete[] input;
   }
   return 0;
}




*******************************************************************************************************************************************************************************


