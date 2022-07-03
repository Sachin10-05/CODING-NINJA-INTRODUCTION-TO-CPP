                                                                            CHECK PRIME
                                                                            ***********
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	bool res = true;
	if(n<=1)
		cout << "Not Prime";
	else
	{
		for(int i=2;i<n;i++)
		{
			if(n%i ==0)
			{
				res = false;
				break;
			}
		}
		if(res)
			cout << "Yes Prime";
		else
			cout << "Not Prime";
	}
}
*/
