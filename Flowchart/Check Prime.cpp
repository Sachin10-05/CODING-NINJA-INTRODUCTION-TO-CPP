                                                                            CHECK PRIME
                                                                            ***********
									    
//Time Complexity: O(sqrt(N))
									    
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin >> n;
   bool res = true;
   if(n<=1)
      cout << "Not Prime";
   else
   {
      for(int i=2;i<=sqrt(n);i++)     ☑☑☑☑☑
      {
         if(n%i == 0)
	 {
	    res = false;
	    break;
	 }
      }
      if(res)
         cout << "Yes Prime";
      else
	 cout << "Not Prime";
    }
}






//******************************************************************************************************************************************************************
										    
//Time Complexity: O(log(log(N)))
//This can be achieved using "SIEVE OF ERATOSTHENES"
										    
										    
										    
										    

