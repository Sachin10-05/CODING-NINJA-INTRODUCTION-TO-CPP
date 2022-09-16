//                                                                       TRIANGLE OF NUMBERS
//                                                                       *******************

/*
Sample Input 1:
5
Sample Output 1:
    1
   232
  34543
 4567654
567898765

*/


********************************************************************************************************************************************************************************

//using FOR loop
****************

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    
    int x = 0;
    for(int i=1;i<=n;i++)       // left triable containing spaces
    {
        for(int j=1;j<=n-i;j++)
        {
            cout << " ";
        }
        
        for(int j=1;j<=i;j++)    // Middle mirror Numbered triangle
        {
            cout << i+j-1;
        }
        
        int a = x;
        for(int j=1;j<i;j++)     // right triangle
        {
            cout << a;
            a--;
        }
        x+=2;
        cout << endl;
    }
}



********************************************************************************************************************************************************************

//using WHILE loop
******************

/*
#include<iostream>
using namespace std;
int main()
{
   int N;
   cin >> N;
   int i=1;
   while(i<=N)
   {
      int j=1;
      while(j<=(N-i))
      {
         cout << " ";
         j++;
      }
        
      j=1;
      int x=i;
      while(j<=i)
      {
         cout << x;
         x++;
         j++;
      }
		
      j=2;
      int y=2*i - 2;
      while(j<=i)
      {
         cout << y;
         y--;
         j++;
      }
      cout << endl;
      i++;
    }
 }
*/
	
**************************************************************************************************************************************************************************









