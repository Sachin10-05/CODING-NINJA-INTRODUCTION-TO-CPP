//                                                                     DIAMOND OF STARS
//                                                                     ****************

/*
Sample Input 1:
7
Sample Output 1:
   *
  ***
 *****
*******
 *****
  ***
   *
*/


****************************************************************************************************************************************************************************

//using FOR loop
****************

#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    
    //UPPER TRIANGULAR PART
    int N1 = n/2 + 1;      
    for(int i=1;i<=N1;i++)
    {
        for(int j=1;j<=N1-i;j++)     //UPPER LEFT TRIANGULAR SPACES
        {
            cout << " ";
        }
        
        for(int j=1;j<=i;j++)        //UPPER MIRROR TRIANGLE
        {
            cout << "*";
        }
        
        for(int j=1;j<i;j++)        //UPPER RIGHT TRIANGLE
        {
            cout << "*";
        }
        cout << endl;
    }
    
    
    //LOWER INVERTED TRIANGULAR PART
    int N2 = n-N1;           
    for(int i=1;i<=N2;i++)
    {
        for(int j=1;j<=i;j++)      //LOWER LEFT TRIANGULAR SPACES
        {
            cout << " ";
        }
        
        for(int j=N2;j>=i;j--)     //LOWER MIRROR TRIANGLE
        {
            cout << "*";
        }
        
        for(int j=N2;j>i;j--)      //LOWER RIGHT TRIANGLE
        {
            cout << "*";
        }
        cout << endl;
    }
}


*******************************************************************************************************************************************************************************

//using WHILE loop
******************

/*
#include<iostream>
using namespace std;

int main()
{
   int i = 1, j, k, rows;
   char ch;
     
   cin >> rows;
   int N = (rows/2) + 1;
   
   //UPPER TRIANGULAR PART
   while(i <= N)
    {
       j = 1;
       while( j <= N - i)
       {
          cout << " ";
          j++;
       }
       
       k = 1;
       while( k <= i * 2 - 1)
       {
           cout << "*";
           k++;
       }
       cout << endl;
       i++;
    }	

    //LOWER INVERTED TRIANGULAR PART
    i = N - 1;
    while( i > 0)
    {
       j = 1;
       while( j <= N - i)
       {
          cout << " ";
          j++;
       }
       
       k = 1;
       while( k <= i * 2 - 1)
       {
          cout << "*";
          k++;
       }
       cout << endl;
       i--;
    }	
 }
*/

	
	
****************************************************************************************************************************************************************************

























