/*
problem:
********
Substring:-  A substring is a contiguous sequence of characters within a string. 
Constraints:
	0 <= N <= 10^6
	Where N is the length of the input string.
	Time Limit: 1 second
	
Sample Input 1:
abc

Sample Output 1:
a 
ab 
abc 
b 
bc 
c 
*/






//********************************************************************************************************************************************************************


* solution-1:
* T.C = O(N^3)
* S.C = O(1)
****************



#include<bits/stdc++.h>
using namespace std;

void printSubstrings(char arr[])
{
   for(int i=0;arr[i]!='\0';i++)
   {
      for(int j=i;arr[j]!='\0';j++)
      {
         for(int k=i;k<=j;k++)
         {
            cout << arr[k];
         }
         cout << "\n";
      }
   }
}



int main() 
{
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}







********************************************************************************************************************************************************************************


















