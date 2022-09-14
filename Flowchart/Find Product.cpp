                                                                    FIND PRODUCT (N!)
                                                                    *****************

Recursive approach
------------------

//Time Complexity:  O(N)
//space complexity: O(1)

/*
#include<bits/stdc++.h>
using namespace std;

int fact(int N)
{
   //base case
   if(N==0 || N==1)   
      return 1;
   return N*fact(N-1);	
}

int main()
{
   int N;
   cin >> N;
   int res = fact(N);
   cout << res;
}
*/



//******************************************************************************************************************************************************************4

Iterative (using For Loop) 
--------------------------

//Time complexity:  O(N)
//space complexity: O(1)
									    
/*
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int res = 1;
    for(int i=2;i<=n;i++)
        res = res*i;
    cout << res;
    return 0;
}
*/


//********************************************************************************************************************************************************************


Iterative (using While Loop) 
----------------------------

//Time complexity:  O(N)
//space complexity: O(1)

/*
#include<bits/stdc++>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    int res = 1;
    int i=1;
    while(n!=0)
    {
        res = res*i;
        n--;
        i++;
    }
    cout << res;
    return 0;
}								    
*/									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    
									    

