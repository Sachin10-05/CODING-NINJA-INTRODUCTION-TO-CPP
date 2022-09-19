/*
problem:
--------
Two random integer arrays/lists have been given as ARR1 and ARR2 of size N and M respectively. Both the arrays/lists contain numbers from 0 to 9
(i.e. single digit integer is present at every index). The idea here is to represent each array/list as an integer in itself of digits N and M.

You need to find the sum of both the input arrays/list treating them as two integers and put the result in another array/list i.e. output array/list will
also contain only single digit at every index.

Sample Input 1:
1
3
6 2 4
3
7 5 6
Sample Output 1:
1 3 8 0
*/

//********************************************************************************************************************************************************************


//solution [using two-pointer algorithm]
*****************************************

#include<bits/stdc++.h>
using namespace std;

void sumOfTwoArrays(int *arr1, int n1, int *arr2, int n2, int *ans)
{
    int i=n1-1;
    int j=n2-1;
    int carry = 0;
    
    int x = 0;
    
    //case-1
    while(i>=0 && j>=0)
    {
        int sum = arr1[i] + arr2[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans[x] = sum;
        x++;
        i--;
        j--;
    }
    
    //case-2
    while(i>=0)
    {
        int sum = arr1[i] + carry;
        carry = sum/10;
        sum = sum%10;
        ans[x] = sum;
        x++;
        i--;
    }
    
    //case-3
    while(j>=0)
    {
        int sum = arr2[j] + carry;
        carry = sum/10;
        sum = sum%10;
        ans[x] = sum;
        x++;
        j--;
    }
    
    //case-4
    while(carry != 0)
    {
        int sum = carry;
        carry = sum/10;
        sum = sum%10;
        ans[x] = sum;
        x++;
    }
    
    
    //reverse ans array
    int s = 0;
    int e = max(n1, n2);
    while(s <= e)
    {
        swap(ans[s], ans[e]);
        s++;
        e--;
    }
}





int main()
{
   int t;
   cin >> t;
   while(t--)
   {
      int size1;
      cin >> size1;
      int *arr1 = new int[size1];
      for(int i=0;i<size1;i++)
      {
         cin >> arr1[i];
      }
      int size2;
      cin >> size2;
      int *arr2 = new int[size2];
      for(int i=0;i<size2;i++)
      {
         cin >> arr2[i];
      }
		
      int outsize = 1 + max(size1,size2);  //size of resultant arr
      int *output = new int[outsize];      //resultant array
		
      sumOfTwoArrays(arr1, size1, arr2, size2, output);
		
      for(int i=0;i<outsize;i++)
      {
         cout << output[i] << " ";
      }
      delete[] arr1;
      delete[] arr2;
      delete[] output;
      cout << endl;
   }
   return 0;
}






*******************************************************************************************************************************************************************************






