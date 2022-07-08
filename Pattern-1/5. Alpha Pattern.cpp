//                                                                          ALPHA PATTERN
//                                                                          *************

/*
Problem
-------

Sample Input 1:
7
Sample Output 1:
A
BB
CCC
DDDD
EEEEE
FFFFFF
GGGGGGG

Sample Input 2:
6
Sample Output 2:
A
BB
CCC
DDDD
EEEEE
FFFFFF

*/
//***********************************************************************************************************************************************************************
//Solution:


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
        int x = 64+i;
        while(j<=i)
        {
            cout << char(x);
            j++;
        
        }
        cout << endl;
        i++;
    }
}






















