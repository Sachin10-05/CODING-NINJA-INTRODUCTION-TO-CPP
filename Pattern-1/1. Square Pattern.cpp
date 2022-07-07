//                                                                    SQUARE PATTERN
//                                                                    **************

/*
Problem:
Pattern for N = 4
4444
4444
4444
4444

Sample Input 1:
7
Sample Output 1:
7777777
7777777
7777777
7777777
7777777
7777777
7777777

*/
//********************************************************************************************************************************************************************

//Solution
----------
  
#include<iostream>
using namespace std;
int main()
{
    int N;      // Total_No_of_Rows
    cin >> N;
    
    int i=1;
    while(i<=N)
    {
        int j=1;
        while(j<=N)
        {
            cout << N;
            j++;
        }
        cout << endl;
        i++;
    }
}

































