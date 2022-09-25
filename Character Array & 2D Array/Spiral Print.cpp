/*
problem:
*********
For a given two-dimensional integer array/list of size (N x M), print it in a spiral form. That is, you need to print in the order followed for every iteration:
a. First row(left to right)
b. Last column(top to bottom)
c. Last row(right to left)
d. First column(bottom to top)
   Mind that every element will be printed only once.
   
Constraints :
    1 <= t <= 10^2
    0 <= N <= 10^3
    0 <= M <= 10^3
    Time Limit: 1sec
    
Sample Input 1:
1
4 4 
1 2 3 4 
5 6 7 8 
9 10 11 12 
13 14 15 16

Sample Output 1:
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
*/





******************************************************************************************************************************************************************************

//solution:
************

#include<bits/stdc++.h>
using namespace std;


void spiralPrint(int **arr, int m, int n)
{
   int row_start = 0;
	 int row_end = (m-1);
	 int col_start = 0;
	 int col_end = (n-1);
	
	 while(row_start < row_end  &&  col_start < col_end)
	 {
      //for row_start
		  for(int i=col_start;i<=col_end;i++)
		  {
			   cout << arr[row_start][i] << " ";
		  }
		  row_start++;
        
		
		  //for col_end
		  for(int i=row_start;i<=row_end;i++)
		  {
			   cout << arr[i][col_end] << " ";
		  }
		  col_end--;
        
		
		  //for row_end
		  for(int i=col_end;i>=col_start;i--)
		  {
			   cout << arr[row_end][i] << " ";
		  }
		  row_end--;
        
		
		  //for col_start
		  for(int i=row_end;i>=row_start;i--)
		  {
			   cout << arr[i][col_start] << " ";
		  }
		  col_start++;
	 }
}



int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int row, col;
      cin >> row >> col;
      int **matrix = new int *[row];
      for (int i = 0; i < row; i++)
      {
         matrix[i] = new int[col];
         for (int j = 0; j < col; j++)
         {
            cin >> matrix[i][j];
         }
      }
      spiralPrint(matrix, row, col);

      for (int i = 0; i < row; ++i)
      {
         delete[] matrix[i];
      }
      delete[] matrix;
      cout << endl;
   }
}






***************************************************************************************************************************************************************************


















 
