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
1
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

i)   Time complexity: O(log(N))
ii)  Array must be sorted either in Ascending or in Descending order.
iii) if start and end index are very large then finding Mid = (start+end)/2 might create problem in that case we can use:
	 int mid = start + (end - start)/2 will also result same thing.



//solution-1
*************

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

//solution-2
*************

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
   int size;   //size of array
   cin >> size;
   int *input = new int[size];
   for(int i=0;i<size;i++)
   {
      cin >> input[i];
   }
   int t;     //No of test cases
   cin >> t;
   while(t--)
   {
      int val;  //Element to be searched
      cin >> val;
      cout << binarySearch(input,size,val);
   }
   delete[] input;
   return 0;
}






***************************************************************************************************************************************************************************








