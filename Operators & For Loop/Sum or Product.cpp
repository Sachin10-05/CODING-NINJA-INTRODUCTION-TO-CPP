/*
Problem
-------
Write a program that asks the user for a number N and a choice C. And then give them the possibility to choose between computing the sum and 
computing the product of all integers in the range 1 to N (both inclusive).
If C is equal to -
 1, then print the sum
 2, then print the product
 Any other number, then print '-1' (without the quotes)
 
Sample Input 1 :
10
1
Sample Output 1 :
55

Sample Input 2 :
10
2
Sample Output 2 :
3628800

Sample Input 3 :
10
4
Sample Output 3 :
-1

*/



//********************************************************************************************************************************************************************


//SOLUTION
//--------

#include<iostream>
using namespace std;

int main() 
{
    int N;             // Number
    cin >> N;
    
    int C;             // choice
    cin >> C;
    
    
    int Sum=0;
    int Prod=1;
    if(C==1)
    {
        while(N!=0)
        {
            Sum += N;
            N--;
        }
        cout << Sum << endl;
    }
    
    else if(C==2)
    {
        while(N!=0)
        {
            Prod *= N;
            N--;
        }
        cout << Prod << endl;
    }
    
    else
    {
        cout << "-1" << endl;
    }
    
}

























































