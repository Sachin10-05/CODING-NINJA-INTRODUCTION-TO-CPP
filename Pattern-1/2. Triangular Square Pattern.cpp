/*

Sample Input 1:
5
Sample Output 1:
*
**
***
****
*****

Sample Input 2:
6
Sample Output 2:
*
**
***
****
*****
******

*/






//********************************************************************************************************************************************************************
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
        while(j<=i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}








