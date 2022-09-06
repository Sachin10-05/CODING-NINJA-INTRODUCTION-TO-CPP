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
//									Method-1
								       ----------

//Time Complexity: O(log(N))
	
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int N;
   cin >> N;
   string res = "";
   while(N!=0)
   {
      int rem = N%2;
      if(rem==0)
         res+="0";
      else
	 res+="1";
      N=N/2;
   }
   
   //reverse the string res
   for(int i=res.length()-1;i>=0;i--)
   {
      cout << res[i] << "";
   }
}
*/
  
  
//********************************************************************************************************************************************************************
  
//									Method-2
								       ----------

//Time Complexity: O(Log(N))
//WARNING 😈😈😈 : "This code will not run for large integers because integer ranges from -2^31 to 2^31-1, so always try storing bits into string"
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    long long int ans = 0;
    int i = 0;
    while(N!=0)
    {
        int rem = N%2;
        ans = ans + rem*pow(10,i);   //formula to reverse integer Number
        i++;
        N=N/2;
    }
    cout << ans;
    return 0;
}
*/



//******************************************************************************************************************************************************************
	
//								    Method-3 (Using Bitwise operator)
								   -----------------------------------
	
//Time Complexity: O(Log(N))
/*	
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string ans = "";
    if(n==0)
    	cout << "0";
    while(n!=0)
    {
        int bit = n&1;         //remainder
        ans += to_string(bit);
        n = n >> 1;            //rigth shift by 1
    }
	
    //reverse of string ans 
    for(int i=ans.length()-1; i>=0;i--)
	cout << ans[i] << "";
}
*/
	
	
	
	
//******************************************************************************************************************************************************************


//									Method-4
//								       ----------
	







