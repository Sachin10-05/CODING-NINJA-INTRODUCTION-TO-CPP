/*
Problem
-------
Take input a stream of n integer elements, find the second largest element present.
The given elements can contain duplicate elements as well. If only 0 or 1 element is given, the second largest should be INT_MIN ( - 2^31 ).
Input format :
Line 1 : Total number of elements (n)
Line 2 : N elements (separated by space)

Sample Input 1:
 4
 3 9 0 9
Sample Output 1:
 3
 
Sample Input 2 :
 2
 4 4
Sample Output 2:
 -2147483648
 
 */



******************************************************************************************************************************************************************************

#include<bits/stdc++.h>
using namespace std;
int main()
{
   int N;
   cin >> N;
	
   int num;
   int max = INT_MIN;
   int secMax = INT_MIN;
   for(int i=1;i<=N;i++)
   {
      cin >> num;
      if(num>max)
      {
         secMax = max;
	 max = num;
      }
      else if(num>secMax && max!=secMax)
      {
	 secMax = num;
      }
   }
   cout << secMax;
}
























