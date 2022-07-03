                                                                              FIND GCD or HCF
                                                                              ***************


/*
#include<bits/stdc++.h>
using namespace std;

int gcd(int max,int min)
{
	if(max%min==0)         //base case
		return min;
	return gcd(min,max%min);
}

int main()
{
	int n1,n2;
	cin >> n1 >> n2;
	int max;
	int min;
	if(n1>n2)
	{
		max=n1;
		min=n2;	
	}
	else
	{
		max=n2;
		min=n1;
	}
	
	cout << gcd(max,min);
}
*/
