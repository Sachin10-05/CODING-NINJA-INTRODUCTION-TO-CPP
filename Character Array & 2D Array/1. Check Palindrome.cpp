/*
Problem:
-------
Given a string, determine if it is a palindrome, considering only alphanumeric characters.
Palindrome: A palindrome is a word, number, phrase, or other sequences of characters which read the same backwards and forwards.

Constraints:
	0 <= N <= 10^6
	Where N is the length of the input string.
	Time Limit: 1 second

Sample Input 1 :
abcdcba
Sample Output 1 :
true 
*/





//********************************************************************************************************************************************************************


//solution
//T.C = O(N)
//S.C = O(1)
//Two-pointer Approach
************************


#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(char *arr)
{
   int n = strlen(arr);   
   int i=0;
   int j=n-1;
   while(i<=j)
   {
      if(arr[i] != arr[j])
         return false;
      i++;
      j--;
   }
   return true;
}



int main()
{
   int size = 1e6;
   char str[size];
   cin >> str;
   cout << (checkPalindrome(str) ? "true" : "false" );
}









