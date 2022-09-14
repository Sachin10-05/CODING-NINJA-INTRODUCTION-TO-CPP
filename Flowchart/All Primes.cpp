                                                                        ALL PRIMES (from 1 to N)
                                                                        ************************
		
										
//Time Complexity: O(N*sqrt(N)
//****************************
										
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int N;
   cin >> N;
   for(int i=2;i<=N;i++)
   {
      bool flag = true;
      for(int j=2;j<=sqrt(i);j++)     ☑☑☑☑☑
      {
         if(i%j == 0)
	 {
	    flag = false;
	    break;
	 }
      }
      
      if(flag)
	cout << i << " ";
    }
}




//*******************************************************************************************************************************************************************



//Time Complexity : **O(N^2)**

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int N;
   cin >> N;
   for(int i=2;i<=N;i++)
   {
      bool flag = true;
      for(int j=2;j<i;j++)     ☑☑☑☑☑
      {
         if(i%j == 0)
	 {
	    flag = false;
	    break;
	 }
      }
      
      if(flag)
	cout << i << " ";
    }
}
*/

										
										
										

//******************************************************************************************************************************************************************



// Time Complexity: O(N^2)									
/*									
#include<bits/stdc++.h>
using namespace std;
int main()
{
   int N;
   cin >> N;
   for(int i=2;i<=N;i++)
   {
      bool flag = true;
      for(int j=2;j<=i/2;j++)     ☑☑☑☑☑
      {
         if(i%j == 0)
	 {
	    flag = false;
	    break;
	 }
      }
      
      if(flag)
	cout << i << " ";
    }
}
*/
										
										
										

										
										
//******************************************************************************************************************************************************************
																
// Time Complexity: O(n*log(log(n)))
//This can be done using "SIEVE OF ERATOSTHENES."






