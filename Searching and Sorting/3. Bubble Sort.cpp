//THEORY
*********

* Bubble sort:- Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in the wrong order.
		And at the end of every round Largest element get placed at end of the Array.
* Ex- [5, 1, 4, 2, 8]
  (At a time only single swapping is done)
  Round-1: [1, 5, 4, 2, 8]
           [1, 4, 5, 2, 8]
           [1, 4, 2, 5, 8]
           [1, 4, 2, 5, 8]
	   
  Round-2: [1, 4, 2, 5]
           [1, 2, 4, 5]
           [1, 2, 4, 5]
	   
  Round-3: [1, 2, 4]
	   [1, 2, 4]
			 
  Round-4: [1, 2]
  
* Total Comparision = N*(N-1)/2
* Stability = YES
* Space Complexity = O(1)
* Time Complexity: i)  Best Case:  O(N)   **optimized soln
		   ii) Avg Case:   O(N^2)
	           iii)Worst Case: O(N^2)
			   
			   
			   
			   
			 
******************************************************************************************************************************************************************************

//using recursion
******************

void bubbleSort(int *arr, int N)
{
   if(N==0 || N==1)
      return;
   for(int i=0;i<N-1;i++)
   {
      if(arr[i] > arr[i+1])
         swap(arr[i], arr[i+1]);
   }
   bubbleSort(arr,N-1);
}





*******************************************************************************************************************************************************************************
	
	
//using iteration
******************
		  
void bubbleSort(int *arr, int N)
{
   //first for loop for total no of round = N-1
   for(int i=0;i<N-1;i++)
   {
      for(int j=0;j<N-i-1;j++)
      {
         if(arr[j] > arr[j+1])
	    swap(arr[j], arr[j+1]);
      }
   }	
}		 





*****************************************************************************************************************************************************************************



//using iteration (OPTIMIZED soln)
************************************

* Note- In Best Case T.C = O(N)
	
void bubbleSort(int *arr, int n)
{
   //first for loop for total no of round = n-1
   for(int i=0;i<n-1;i++)
   {
      bool isSwap = false;
      for(int j=0;j<n-i-1;j++)
      {
         if(arr[j] > arr[j+1])
	 {
	    swap(arr[j], arr[j+1]);
	    isSwap = true;
	 }
      }
      if(isSwap == false)
         break;
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
	
      bubbleSort(arr,size);
		
      for(int i=0;i<size;i++)
      {
         cout << arr[i] << " ";
      }
      delete[] arr;
      cout << endl;
   }
}




********************************************************************************************************************************************************************************





