                                                                    FIND PRODUCT (FACTORIAL)
                                                                    ************************

Iterative aproch
----------------

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin >> N;
	int res = 1;
	for(int i=1;i<=N;i++)
	{
		res = res * i;
	}
	cout << res;
}
*/




Recursive approach
------------------

/*
#include<bits/stdc++.h>
using namespace std;

int fact(int N)
{
	if(N==0)   //base case
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


