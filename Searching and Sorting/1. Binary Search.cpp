/*
Problem:
--------
You have been given a sorted(in ascending order) integer array/list(ARR) of size N and an element X. Write a function to search this element in the given 
input array/list using 'Binary Search'.
Return the index of the element in the input array/list. In case the element is not present in the array/list, then return -1.

Constraints :
1 <= t <= 10^4
0 <= N <= 10^6
0 <= X <= 10^9
Time Limit: 1 sec

Sample Input 1:
7
1 3 7 9 11 12 45
1 ------------------------> No of test cases
3
Sample Output 1:
1


Sample Input 2:
7
1 2 3 4 5 6 7
2
9
7
Sample Output 2:
-1
6
*/






//*********************************************************************************************************************************************************************
//*********************************************************************************************************************************************************************

//Binary Search
****************

* Array must be sorted either in Ascending or in Descending order.
* if start and end index are very large then finding Mid = (start+end)/2 might create problem in that case we can use:
  int mid = start + (end - start)/2 will also result same thing.


//*********************************************************************************************************************************************************************
//*********************************************************************************************************************************************************************


* solution-1
* using Iteration
* Time complexity: O(log(N))
* Space Complexity: O(1)
**********************************


int binarySearch(int *arr, int n, int val)
{
   int start = 0;
   int end = n-1;
   int mid = (start + end)/2;
   while(start <= end)
   {
      if(arr[mid] == val)
         return mid;
      else if(val > arr[mid])
         start = mid + 1;
      else
         end = mid - 1;
      mid = (start + end)/2;
   }
   return -1;
}







*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************

]* solution-2
* using Recursion
* Time complexity: O(log(N))
* Space Complexity: O(log(N))
**********************************


int helper(int arr[], int start, int end, int k)
{
   int mid = start + (end-start)/2;
   //base case
   if(start > end)
      return -1;
   if(arr[mid] == k)
      return mid;
   if(arr[mid] > k)
   {
      return helper(arr, start, mid-1, k);
   }
   else
   {
      return helper(arr, mid+1, end, k);
   }
}


int binarySearch(int *arr, int n, int val)
{
   int start = 0;
   int end = n-1;
   return helper(arr,start,end,val);
}








*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************


//solution-3:
//using Iteration
*******************


/*
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int *arr,int size,int x)
{
   int start = 0;
   int end = size-1;
   while(start <= end)
   {
      int mid = (start + end)/2;
      if(arr[mid] == x)
         return mid;
      else if(arr[mid]> x)
         end = mid-1;
      else if(mid < x)
         start = mid + 1;
      return -1;
   }
}


int main()
{
   int size;  
   cin >> size;
   int *input = new int[size];
   for(int i=0;i<size;i++)
   {
      cin >> input[i];
   }
   int t;     
   cin >> t;
   while(t--)
   {
      int val;  
      cin >> val;
      cout << binarySearch(input,size,val);
   }
   delete[] input;
   return 0;
}
*/






*****************************************************************************************************************************************************************************
*****************************************************************************************************************************************************************************








