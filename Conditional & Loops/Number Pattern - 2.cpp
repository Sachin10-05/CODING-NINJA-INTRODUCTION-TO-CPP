//                                                                          Number Pattern 2
//                                                                          ****************
/*
Problem:

Print the following pattern

Sample Input :
5
Sample Output :
    1
   23
  345
 4567
56789
*/

//**********************************************************************************************************************************************************************
//Solution:

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin >> N;
	
	for(int i=1;i<=N;i++)
	{
		for(int j=N-i;j>=1;j--)
		{
			cout << " " << " ";
		}
		
		for(int k=i;k<2*i;k++)
		{
			cout << k << " ";
		}
		cout << "\n";
	}
}











