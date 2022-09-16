//                                                                      CHARACTER PATTERN
//                                                                      *****************

/*
Problem:
--------
Sample Input 1:
5
Sample Output 1:
A
BC
CDE
DEFG
EFGHI

Sample Input 2:
6
Sample Output 2:
A
BC
CDE
DEFG
EFGHI
FGHIJK
*/

//*********************************************************************************************************************************************************************

//using FOR loop
****************

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            char c = 64 + i + j - 1;
            cout << c;
        }
        cout << endl;
    }
}




*****************************************************************************************************************************************************************************

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
      int x = 64 + i;
      while(j<=i)
      {
         cout << char(x);
	 x++;
	 j++;
      }
      cout << endl;
      i++;
    }
}
*/


************************************************************************************************************************************************************************

