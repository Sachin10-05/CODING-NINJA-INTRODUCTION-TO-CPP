/*
Problem:
*********
For a given two strings, 'str1' and 'str2', check whether they are a permutation of each other or not.
definition: Two strings are said to be a permutation of each other when either of the string's characters can be rearranged so that it becomes identical to the other one.
Note:
    All the characters in the input strings would be in lower case.
  
Constraints:
    0 <= N <= 10^6
    Where N is the length of the input string.
    Time Limit: 1 second
    
Sample Input 1:
abcde
baedc

Sample Output 1:
true
*/




*********************************************************************************************************************************************************************************


* Total Permutation = N!
* T.C = O(N1 + N2)
* S.C = O(1)
******************************


  
#include<bits/stdc++.h>
using namespace std;

bool isPermutation(char arr1[], char arr2[])
{
   //frequency of characters of arr1
   int count1[26] = {0};      
   for(int i=0;i<strlen(arr1);i++)
   {
      count1[arr1[i]-'a']++;
   }
	
   //frequency of characters of arr2
   int count2[26] = {0};      
   for(int i=0;i<strlen(arr2);i++)
   {
      count2[arr2[i]-'a']++;
   }
	
   //check eual or not
   for(int i=0;i<26;i++)
   {
      if(count1[i] != count2[i])
         return false;
   }
   return true;
}



int main()
{
    int size = 1e6;
    char str1[size];
    char str2[size];
    cin >> str1 >> str2;
    cout << (isPermutation(str1, str2) ? "true" : "false");
}






************************************************************************************************************************************************************************************













