/*
problem:
********

Constraints:
	0 <= N <= 10^6
	Where N is the length of the input string.
	Time Limit: 1 second
	
Sample Input 1:
aabccbaa

Sample Output 1:
abcba
*/






//*******************************************************************************************************************************************************************


* Time Complexity: O(N)
* Space Complexity: O(1)
**************************



#include<bits/stdc++.h>
using namespace std;

void removeConsecutiveDuplicates(char arr[])
{
   int n = strlen(arr);
   int x = 0;
   for(int i=0;i<n;i++)
   {
      if(arr[i] != arr[i+1])
      {
         arr[x] = arr[i];
         x++;
      }
   }
   arr[x] = '\0';
}



int main() 
{
   int size = 1e6;
   char str[size];
   cin >> str;
   removeConsecutiveDuplicates(str);
   cout << str;
}



