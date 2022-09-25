/*
problem
********
For a given two-dimensional integer array/list of size (N x M), you need to find out which row or column has the 
largest sum(sum of all the elements in a row/column) amongst all the rows and columns.

Note:
    If there are more than one rows/columns with maximum sum, consider the row/column that comes first.
    And if ith row and jth column has the same largest sum, consider the ith row as answer.
    
Sample Input 1 :
1
2 2 
1 1 
1 1

Sample Output 1 :
row 0 2


Sample Input 2 :
2
3 3
3 6 9 
1 4 7 
2 8 9
4 2
1 2
90 100
3 40
-10 200

Sample Output 2 :
column 2 25
column 1 342
*/





***************************************************************************************************************************************************************************

//solution
***********



#include<bits/stdc++.h>
using namespace std;

void findLargest(int **arr, int row, int col)
{
   int max_row_sum = -2147483648;
   int max_row_index = 0;
   for(int i=0;i<row;i++)
   {
      int row_sum = 0;
      int row_index = 0;
      for(int j=0;j<col;j++)
      {
         row_sum = row_sum + arr[i][j];
         row_index = i;
      }
      if(row_sum > max_row_sum && row_index >= max_row_index)
      {
         max_row_sum = row_sum;
         max_row_index = row_index;
      }
   }
    
    
   int max_col_sum = -2147483648;
   int max_col_index = 0;
   for(int i=0;i<col;i++)
   {
      int col_sum = 0;
      int col_index = 0;
      for(int j=0;j<row;j++)
      {
         col_sum = col_sum + arr[j][i];
         col_index = i;
      }
      if(col_sum > max_col_sum && col_index >= max_col_index)
      {
         max_col_sum = col_sum;
         max_col_index = col_index;
      }
   }
    
   if(max_row_sum >= max_col_sum)
      cout << "row " << max_row_index << " " << max_row_sum << endl;
   else
      cout << "column " << max_col_index << " " << max_col_sum;
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

		  findLargest(input, row, col);
		  cout << endl;
	 }
}





***************************************************************************************************************************************************************************








































































