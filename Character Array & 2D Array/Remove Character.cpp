/*
problem:
*********
	For a given a string(str) and a character X, write a function to remove all the occurrences of X from the given string.
	The input string will remain unchanged if the given character(X) doesn't exist in the input string.

Constraints:
	0 <= N <= 10^6
	Where N is the length of the input string.
	Time Limit: 1 second
	
Sample Input 1:
aabccbaa
a
Sample Output 1:
bccb
*/






//*********************************************************************************************************************************************************************

solution-1
two-pointer approach
*********************

void removeAllOccurrencesOfChar(char arr[], char ch)
{
   int n = strlen(arr);
   int i=0;
   int j=0;
   while(i<n)
   {
      if(arr[j] == ch)
      {
         j++;
      }
      else
      {
          swap(arr[i], arr[j]);
          i++;
          j++;
      }
   }
   arr[i] = '\0';
}





*************************************************************************************************************************************************************************


//solution-2
*************

#include<bits/stdc++.h>
using namespace std;

void removeAllOccurrencesOfChar(char str[], char c)
{
   int j=0;
   for(int i=0;str[i] != '\0';i++)
   {
      if(str[i] != c)
      {
         str[j] = str[i];
	 j++;
      }
   }
   str[j] = '\0';
}



int main() 
{
   int size = 1e6;
   char str[size];
   cin.getline(str, size);
   char c;
   cin >> c;
   removeAllOccurrencesOfChar(str, c);
   cout << str;
}






*****************************************************************************************************************************************************************************























