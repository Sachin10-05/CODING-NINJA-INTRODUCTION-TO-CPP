                                                                        MEMBERS OF FIBONACCI
                                                                        ********************
/*
problem:
You are given a single non-negative integer, N. You need to find out whether N is a part of the fibonacci sequence.
Print "Yes" if it is and "No" if it's not.
*/

//*******************************************************************************************************************************************************************

soluiton
--------


#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    
    //base case
    if(N==0 || N==1)
        cout << "Yes";
    else
    {
        int prev = 0;
        int curr = 1;
        int res = 0;
        bool flag = false;
        int i=1;
        while(i <= N)
        {
            res = prev + curr;
            if(res == N)
            {
                flag = true;
                break;
            }
            prev = curr;
            curr = res;
            i++;
        }
        
        if(flag)
            cout << "Yes";
        else
            cout << "No";
    }
        
}







