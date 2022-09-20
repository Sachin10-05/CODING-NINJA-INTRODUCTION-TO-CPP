/*

Constraints :
	0 <= |S| <= 10^7
	where |S| represents the length of string, S.
	
Sample Input 1:
Welcome to Coding Ninjas

Sample Output 1:
Ninjas Coding to Welcome
*/






//*********************************************************************************************************************************************************************


* solution:
* T.C = O(N)
* S.C = O(1)
**************


#include<bits/stdc++.h>
using namespace std;

void reverseStringWordWise(char arr[])
{
   int n = strlen(arr);
   
   //step-1: Reverse whole string
   int s = 0; 
   int e = n - 1; 
   while(s < e) 
   {
      char temp = arr[s]; 
      arr[s] = arr[e]; 
      arr[e] = temp;
      s++;
      e--;
   }

   //step-2: Reverse each words
   int i=0;
   while(i < n)
   {
      while(i<n && arr[i] == ' ')
         i++;
      int j=i;
      while(i<n && arr[i] != ' ')
         i++;
      int x = j;
      int y = i-1;
      while(x < y)
      {
         char temp = arr[x]; 
         arr[x] = arr[y]; 
         arr[y] = temp;
         x++;
         y--;
      }
      i++;
   }
}



int main() 
{
   char input[1000];
   cin.getline(input, 1000);
   reverseStringWordWise(input);
   cout << input << endl;
}














