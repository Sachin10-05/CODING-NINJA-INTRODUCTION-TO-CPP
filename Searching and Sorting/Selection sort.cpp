//THEORY
*********

* SELECTION SORT :- Selection sort works by taking the smallest element in an unsorted array and bringing it to the front. 

* Example-  [1, 7, 9, 2, 3, 0]

  round-1:  [0, 7, 9, 2, 3, 1]
  round-2:  [0, 1, 9, 2, 3, 7]
  round-3:  [0, 1, 2, 9, 3, 7]
  round-4:	[0, 1, 2, 3, 9, 7]
  round-5:  [0, 1, 2, 3, 7, 9]
  
* Total comparisions = (N-1)
* Not Stable, but can be made stable.
      Stability:= A sorting algorithm is said to be stable if two elements with equal keys appears in the same order 
                  in sorted output as they appear in the input unsorted array.
* Selection sort works when array size is small.
* Space Complexity = O(1)
* Time Complexity: i)  Best Case  = O(N^2)
                   ii) Avg Case   = O(N^2)
                   iii)worst Case = O(N^2)
  
  
  
  
*****************************************************************************************************************************************************************************



//USING ITERATION
******************


#include<bits/stdc++.h>
using namespace std;

void selectionSort(int *arr, int N)
{
  int index;
  for(int i=0;i<N-1;i++)
  {
    index = i;
    for(int j=i+1;j<N;j++)
    {
      if(arr[i] > arr[j])
        index = j;
    }
    swap(arr[i], arr[index]);
  }
}

  
  
int main()
{
  int N;
  cin >> N;
  int *arr = new int[N];
  for(int i=0;i<N;i++)
  {
    cin >> arr[i];
  }
  
  //selection sort
  selectionSort(arr,N);
  
  //print
  for(int i=0;i<N;i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}






*******************************************************************************************************************************************************************************






