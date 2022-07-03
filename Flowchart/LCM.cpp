                                                                  LCM (Least Common Multiple)
                                                                  ***************************


/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n1,n2;
	cin >> n1 >> n2;
	int max;
	if(n1>n2)
		max=n1;
	else
		max=n2;
	int lcm = 1;
	
	for(int i=2;i<max;i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			n1=n1/i;
			n2=n2/i;
			lcm=lcm*i;
		}
	}
	int res = lcm*n1*n2;
	cout << res;
}
*/




