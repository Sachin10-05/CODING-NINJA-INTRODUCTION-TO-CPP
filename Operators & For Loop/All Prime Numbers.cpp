//                                                                  ALL PRIME NUMBER
//                                                                  ****************


/*
Problem
-------
Sample Input 1:
9
Sample Output 1:
2
3
5
7

Sample Input 2:
20
Sample Output 2:
2
3
5
7
11
13
17
19
*/



//***********************************************************************************************************************************************************************


//solution-1
*************


//Time complexity: O(n*sqrt(n))

#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0)
        return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    
    for(int i=2;i<=n;i++)
    {
        if(isPrime(i))
            cout << i << endl;
    }
}


	

 
//******************************************************************************************************************************************************************
  












