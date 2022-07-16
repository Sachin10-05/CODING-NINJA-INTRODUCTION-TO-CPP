/*
Problem
-------
Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
Sample Input 1 :
12
Sample Output 1 :
1100

Sample Input 2 :
7
Sample Output 2 :
111
*/



//Solution
----------
 
//********************************************************************************************************************************************************************
//Method-1
----------
  
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin >> N;
	
	string res;
	while(N!=0)
	{
		int rem = N%2;
		if(rem==0)
			res+="0";
		else
			res+="1";
		N=N/2;
	}
	
	for(int i=res.length()-1;i>=0;i--)
	{
		cout << res[i] << "";
	}
}
*/
  
  
//********************************************************************************************************************************************************************
  
//Method-2
----------

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;  //Decimal Number
    cin >> N;
    string res;
    while(N!=0)
    {
        res = res + ((N%2==0) ? "0" : "1");
        N = N/2;
    }
    
    //algorithm to convert STRING to INTEGER
    long int ans=0;
    for(int i=res.length()-1;i>=0;i--)
    {
        ans=(ans*10) + res[i] - '0'; 
    }
    cout << ans;
}














