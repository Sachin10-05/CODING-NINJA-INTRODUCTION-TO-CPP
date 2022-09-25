/*
problem:
*********
For a given two-dimensional integer array/list of size (N x M), print the array/list in a sine wave order, i.e, print the first column top to bottom, 
next column bottom to top and so on.

Constraints :
    1 <= t <= 10^2
    0<= N <= 10^3
    0 <= M <= 10^3
    Time Limit: 1sec
    
Sample Input 1:
1
3 4 
1  2  3  4 
5  6  7  8 
9 10 11 12

Sample Output 1:
1 5 9 10 6 2 3 7 11 12 8 4
*/






******************************************************************************************************************************************************************************

//solution:
************

//T.C = O(N*M)
//S.C = O(1)

#include<bits/stdc++.h>
using namespace std;


void wavePrint(int **arr, int nRows, int mCols)
{
   for(int col=0;col<mCols;col++)
   {
      if(col%2 == 0)
      {
         for(int row=0;row<nRows;row++)
         {
            cout << arr[row][col] << " ";
         }
      }
      else
      {
         for(int row=nRows-1;row>=0;row--)
         {
            cout << arr[row][col] << " ";
         }
      }
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
		  int **input = new int *[row];
		  for (int i = 0; i < row; i++)
		  {
			   input[i] = new int[col];
			   for (int j = 0; j < col; j++)
			   {
				    cin >> input[i][j];
			   }
		  }
		  wavePrint(input, row, col);
		  cout << endl;
	 }
}






***************************************************************************************************************************************************************************





























