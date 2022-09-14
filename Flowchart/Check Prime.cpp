                                                                            CHECK PRIME
                                                                            ***********

//Using Iteration
//---------------

//Time Complexity: O(sqrt(N))


#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n<=1)
        return false;
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
    isPrime(n) ? cout << "Prime Number" : cout << "Not Prime";
}
										    

										    
	
										    
										    
//******************************************************************************************************************************************************************
		
										    
using Iteration									    
---------------

//Time Complexity: O(N)	

/*
#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if(n<=1)
        return false;
    for(int i=2; i < n; i++)
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
    isPrime(n) ? cout << "Prime Number" : cout << "Not Prime";
}
*/





//******************************************************************************************************************************************************************


using Iteration (without creating new function)
-----------------------------------------------

//Time complexity: O(sqrt(N))

/*
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    
    //base case
    if(n<=1)
        cout << "Not Prime";
    else
    {
        bool flag  = true;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i == 0)
            {
                flag = false;
                break;
            }
        }
        if(flag)
            cout << "Prime Number";
        else
            cout << "Not Prime";
    }
}
*/





//******************************************************************************************************************************************************************
										    
//Time Complexity: O(log(log(N)))
//This can be achieved using "SIEVE OF ERATOSTHENES"
										    
										    
										    
										    

