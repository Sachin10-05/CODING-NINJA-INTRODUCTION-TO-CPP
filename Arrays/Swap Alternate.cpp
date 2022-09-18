/*
Problem
-------
You have been given an array/list(ARR) of size N. You need to swap every pair of alternate elements in the array/list.
You don't need to print or return anything, just change in the input array itself.

Sample Input 1:
1
6
9 3 6 12 4 32
Sample Output 1 :
3 9 12 6 32 4

Sample Input 2:
2
9
9 3 6 12 4 32 5 11 19
4
1 2 3 4
Sample Output 2 :
3 9 12 6 32 4 11 5 19 
2 1 4 3 
*/




***********************************************************************************************************************************************************************************

//Solution-1
*************
    
void swapAlternate(int *arr,int size)
{
   for(int i=0;i<size;i+=2)
   {
      if(i+1 < size)
         swap(arr[i],arr[i+1]);
   }
}





*********************************************************************************************************************************************************************************

//soluton-2
************

/*
#include<bits/stdc++.h>
using namespace std;
void swapAlternate(int *arr,int size)
{
   if(size%2 == 0)
   {
      int k=0;
      for(int i=0;i<size;i+=2)
      {
         k=arr[i];
	 arr[i] = arr[i+1];
	 arr[i+1] = k;
      }
   }
	
   else
   {
      int k=0;
      for(int i=0;i<size-1;i+=2)
      {
         k=arr[i];
	 arr[i] = arr[i+1];
	 arr[i+1] = k;
      }
   }
}


int main()
{
   int t;           
   cin >> t;
   while(t--)
   {
      int size;      
      cin >> size;
      int *arr = new int[size];
      for(int i=0;i<size;i++)
      {
         cin >> arr[i];
      }
      swapAlternate(arr,size);
      for(int i=0;i<size;i++)
      {
         cout << arr[i] << " ";
      }
      cout << endl;
      delete[] arr;
   }
}
*/
	
	



***********************************************************************************************************************************************************************************


















  
  
  
  
  
  
  
  
  
  
  
  
