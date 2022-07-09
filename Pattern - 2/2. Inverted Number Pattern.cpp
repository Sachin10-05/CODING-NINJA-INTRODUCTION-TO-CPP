//                                                                INVERTED NUMBER PATTERN
//                                                                ***********************

/*
Sample Input 1:
5
Sample Output 1:
55555 
4444
333
22
1
*/


//SOLUTION:

#include<iostream>
using namespace std;


int main()
{
    int N;
	cin >> N;
	
	int i=1;
	while(i<=N)
	{
		int j=N;
		while(j>=i)
		{
			cout << (N+1-i);
			j--;
		}
		cout << endl;
		i++;
	}
}


