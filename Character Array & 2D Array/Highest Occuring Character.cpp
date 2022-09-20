/*
problem:
*********
For a given a string(str), find and return the highest occurring character.
Note:  Assume all the characters in the given string to be in lowercase always.

Constraints:
	0 <= N <= 10^6
	Where N is the length of the input string.
	Time Limit: 1 second
	
Sample Input 1:
abdefgbabfba
Sample Output 1:
b

Sample Input 2:
xy
Sample Output 2:
x
*/






//*********************************************************************************************************************************************************************


* solution:
************

char highestOccurringChar(char arr[]) 
{
   //count of characters
   int freq[26] = {0};
   for(int i=0; arr[i]!='\0'; i++)
   {
      freq[arr[i]-'a']++;
   }
    
   int max = -1;
   int index;
   for(int i=0;i<26;i++)
   {
      if(freq[i] > max)
      {
         max = freq[i];
         index = i;
      }
   }
   char ans = index + 'a';
   return ans;
}



int main() 
{
   int size = 1e6;
   char str[size];
   cin >> str;
   cout << highestOccurringChar(str);
}





******************************************************************************************************************************************************************************


















