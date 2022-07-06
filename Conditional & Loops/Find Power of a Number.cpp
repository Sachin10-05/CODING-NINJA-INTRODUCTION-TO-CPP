//                                                                  FIND POWER OF A NUMBER
//                                                                  **********************

/*
Problem:
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.

Sample Input 1 :
 3 4
Sample Output 1 :
81

Sample Input 2 :
 2 5
Sample Output 2 :
32

*/

//***********************************************************************************************************************************************************************
//Solution-1:

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n1,n2;
	cin >> n1 >> n2;
//	cout << pow(n1,n2);
	
	int res = 1;
	for(int i=1;i<=n2;i++)
	{
		res *= n1;
	}
	cout << res;
}


//*******************************************************************************************************************************************************************

//Solution-2

#include<iostream>
using namespace std;

int main()
{
    int x,n;
    cin >> x >> n;
    
    int i=1;
    int res=1;
    while(i<=n)
    {
        res = res * x;
        i++;
    }
    cout << res;
}
















