/*
problem:
*********

Constraints:
	0 <= N <= 10^6
	Where N is the length of the input string.
	Time Limit: 1 second
	
Sample Input 1:
Welcome to Coding Ninjas

Sample Output 1:
emocleW ot gnidoC sajniN
*/







//**********************************************************************************************************************************************************************



* Time Complexity: O(N)
* Space Complexity: O(1)
**************************


//two-pointer approach
void reverseEachWord(char arr[])
{
   int n = strlen(arr);
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
      while(x<y)
      {
         swap(arr[x], arr[y]);
         x++;
         y--;
      }
      i++;
   }
}




int main() 
{
   int size = 1e6;
   char str[size];
   cin.getline(str, size);
   reverseEachWord(str);
   cout << str;
}















