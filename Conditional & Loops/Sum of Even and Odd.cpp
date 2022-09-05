//                                                                      SUM OF EVEN AND ODD
//                                                                      *******************

/*
Problem:
Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.

Sample Input 1:
1234
Sample Output 1:
6 4

Sample Input 2:
552245
Sample Output 2:
8 15

*/

//**********************************************************************************************************************************************************************
//Solution:


#include<bits/stdc++.h>
using namespace std;
int main()
{
   int N;
   cin >> N;
	
   int Even_sum = 0;
   int Odd_sum = 0;
   while(N!=0)
   {
      int rem = N%10;
      if(rem%2==0)
	 Even_sum += rem;
      else
         Odd_sum += rem;
      N=N/10;
    }
    cout << Even_sum << " " << Odd_sum;
}


//*******************************************************************************************************************************************************************











