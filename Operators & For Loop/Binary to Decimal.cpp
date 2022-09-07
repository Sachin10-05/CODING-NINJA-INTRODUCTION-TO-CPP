/*
Given a binary number as an integer N, convert it into decimal and print.
Sample Input 1 :
1100
Sample Output 1 :
12

Sample Input 2 :
111
Sample Output 2 :
7
*/





//*******************************************************************************************************************************************************************

//									Method-1
								       ----------
  
//Time Complexity: O(Log(N))
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int N;
   cin >> N;
   int res=0;
   int i=0;
   while(N!=0)
   {
      int rem=N%10;
      res = res + (rem*pow(2,i));
      i++;
      N=N/10;
   }
   cout << res;
}
*/



//*****************************************************************************************************************************************************************

