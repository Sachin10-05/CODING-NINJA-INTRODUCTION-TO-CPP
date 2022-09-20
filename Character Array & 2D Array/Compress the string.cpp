/*
problem:
*********
    	Write a program to do basic string compression. 
    	For a character which is consecutively repeated more than once, replace consecutive duplicate occurrences with the count of repetitions.
Constraints:
	0 <= N <= 10^6
	Where 'N' is the length of the input string.
	Time Limit: 1 sec
	
Sample Input 1:
aaabbccdsa

Sample Output 1:
a3b2c2dsa
*/





*********************************************************************************************************************************************************************************


* T.C = O(n)
* S.C = O(n)
*************

#include<bits/stdc++.h>
using namespace std;

string getCompressedString(string &str)
{
   int len = str.length();
   string ans;
   int i=0;
   while(i<len)
   {
      int count=1;
      while(str[i] == str[i+1])
      {
         count++;
	 i++;
      }
      if(count==1)
         ans += str[i];
      else
         ans += str[i] + to_string(count);
      i++;
   }
   return ans;
}





int main() 
{
   int size = 1e6;
   string str;
   cin >> str;
   str = getCompressedString(str);
   cout << str << endl;
}






*****************************************************************************************************************************************************************************
























