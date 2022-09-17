/*
Problem
-------
You have been given an empty array(ARR) and its size N. The only input taken from the user will be N and you need not worry about the array.
Your task is to populate the array using the integer values in the range 1 to N(both inclusive) in the order - 1,3,5,.......,6,4,2.

Sample Input 1 :
1
6
Sample Output 1 :
1 3 5 6 4 2
Explanation of Sample Input 1 :
Since the value of N is 6, the number will be stored in the array in such a fashion that 1 will appear at 0th index, then 2 at the last index, 
in a similar fashion 3 is stored at index 1. Hence the array becomes 1 3 5 6 4 2.

Sample Input 2 :
2
9
3
Sample Output 2 :
1 3 5 7 9 8 6 4 2
1 3 

*/

*********************************************************************************************************************************************************************

//solution-1
***********

#include<bits/stdc++.h>
using namespace std;
void arrange(int *arr, int n)
{
    //for Even size
    if(n%2 == 0)
    {
        int x = 1;
        for(int i=0;i<n/2;i++)
        {
            arr[i] = x;
            x+=2;
        }
    
        int k=n;
        for(int i=n/2;i<n;i++)
        {
            arr[i] = k;
            k-=2;
        }
    }
    
    //for Odd size
    else
    {
        int x = 1;
        for(int i=0;i<=n/2;i++)
        {
            arr[i] = x;
            x+=2;
        }
    
        int k=n-1;
        for(int i=n/2+1;i<n;i++)
        {
            arr[i] = k;
            k-=2;
        }
    }
}


int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;

      int *arr = new int[n];
      arrange(arr, n);
      for (int i = 0; i < n; i++)
      {
         cout << arr[i] << " ";
      }
      cout << endl;
      delete [] arr;
   }
}




*********************************************************************************************************************************************************************
*********************************************************************************************************************************************************************
	
//Solution-2
*************
  
  
#include<bits/stdc++.h>
using namespace std;

void arrange(int *arr,int n)
{
    int k=0;
    for(int i=1;i<=n;i++)
    {
        if(i%2 != 0)
        {
            arr[k] = i;
            k++;
        }
    }
    
    for(int j=n;j>0;j--)
    {
        if(j%2 == 0)
        {
            arr[k] = j;
            k++;
        }
    }
}


int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;

      int *arr = new int[n];
      arrange(arr, n);
      for (int i = 0; i < n; i++)
      {
         cout << arr[i] << " ";
      }
      cout << endl;
      delete [] arr;
   }
}



********************************************************************************************************************************************************************









