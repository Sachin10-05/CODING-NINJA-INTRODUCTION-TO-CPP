/*
Problem:
--------
Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
There can be multiple spaces present after any word.

Constraints :
	1 <= Length of string S <= 10^6

Sample Input :
abc def g hi

Sample Output :
abcdefghi
*/





//*******************************************************************************************************************************************************************


//solution:
* Time Complexity : O(N)
* Space complexity: O(1)
**************************




#include<bits/stdc++.h>
using namespace std;

void trimSpaces(char arr[])
{
   int x = 0;
   for(int i=0;i<strlen(arr);i++)
   {
      if(arr[i] != ' ')
      {
         arr[x] = arr[i];
         x++;
      }
   }
   arr[x] = '\0';
}



int main() 
{
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}











