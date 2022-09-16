//                                                                       INTERESTING ALPHABET
//                                                                       ********************

/*
Problem:
--------
Sample Input 1:
8
Sample Output 1:
H
GH
FGH
EFGH
DEFGH
CDEFGH
BCDEFGH
ABCDEFGH

Sample Input 2:
7
Sample Output 2:
G
FG
EFG
DEFG
CDEFG
BCDEFG
ABCDEFG
*/

//************************************************************************************************************************************************************************

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
        for(int j=n+1-i;j<=n;j++)
        {
            char c = 64 + j;
            cout << c;
        }
        cout << endl;
    }
}


*************************************************************************************************************************************************************************

//using WHILE loop
******************

/*
#include<iostream>
using namespace std;
int main() 
{
   int N;
   cin >> N;
   int i=N;
   int k=1;
   while(i!=0)
   {
      int j=1;
      int x = 64 + i;
      while(j<=k)
      {
         cout << char(x); 
	 x++;
	 j++;
      }
      cout << endl;
      k++;
      i--;
    }
}
*/

***************************************************************************************************************************************************************************
