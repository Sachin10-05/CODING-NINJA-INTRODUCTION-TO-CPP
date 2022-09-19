//THEORY
*********

* Insertion Sort:-  * it is a sorting algorithm that places an unsorted element at its suitable place in each iteration.
		    * Insertion sort works similarly as we sort cards in our hand in a card game. 
	            * We assume that the first card is already sorted then, we select an unsorted card.
		    * Unlike other sorting algorithm here 'shifting' of element is done rather then 'swapping'.
	
* Basically, Insertion sort is efficient for small data values
* Insertion sort is adaptive in nature, i.e. it is appropriate for data sets which are already partially sorted.
	
* Ex- [10, 1, 7, 4, 8, 2, 11]
      (assume 1st element is always sorted)
	
  Round-1: 	[1, 10, 7, 4, 8, 2, 11],  when i=1
  Round-2: 	[1, 7, 10, 4, 8, 2, 11],  when i=2
  Round-3: 	[1, 4, 7, 10, 8, 2, 11],  when i=3
  Round-4: 	[1, 4, 7, 8, 10, 2, 11],  when i=4
  Round-5: 	[1, 2, 4, 7, 8, 10, 11],  when i=5
  Round-6: 	[1, 2, 4, 7, 8, 10, 11],  when i=6
	  
* is Stable - YES
* Total Comparision = (N-1)
* Space Complexity: O(1)
* Time Complexity:  * Best Case: O(N)
		    * Avg Case:  O(N^2)
		    * Worst Case:O(N^2)
	  
	  
	  
			    
	  
******************************************************************************************************************************************************************************


//using iteration
******************

//using for loop
void insertionSort(int *arr, int n)
{
    for(int i=1;i<n;i++)
    {
        int temp = arr[i];
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(arr[j] > temp)
            {
                //shift
                arr[j+1] = arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1] = temp;
    }
}






***************************************************************************************************************************************************************************


//using iteartion
******************

//using while loop
#include<bits/stdc++.h>
using namespace std;

void insertionSort(int *arr,int size)
{
   for(int i=1;i<size;i++)
   {
      for(int j=0;j<i;j++)
      {
         if(arr[j] > arr[i])
         {
            int temp = arr[j];
	    arr[j] = arr[i];
	    arr[i] = temp;
	 }
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
		
      insertionSort(arr,size);
		
      for(int i=0;i<size;i++)
      {
         cout << arr[i] << " ";
      }
      delete[] arr;
      cout << endl;
   }
   return 0;
}



***************************************************************************************************************************************************************************






















