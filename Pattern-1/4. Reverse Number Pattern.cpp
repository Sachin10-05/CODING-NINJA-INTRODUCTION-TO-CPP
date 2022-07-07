/*
Sample Input 1:
5
Sample Output 1:
1
21
321
4321
54321

Sample Input 2:
6
Sample Output 2:
1
21
321
4321
54321
654321
*/

//**********************************************************************************************************************************************************************
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
        int j=i;
        while(j!=0)
        {
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }
}


















