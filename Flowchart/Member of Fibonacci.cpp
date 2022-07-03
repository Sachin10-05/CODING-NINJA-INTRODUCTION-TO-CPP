                                                                        MEMBERS OF FIBONACCI
                                                                        ********************

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin >> N;
	
	int first = 0;
	int last = 1;
	int res;
	bool ans = false;
	
	while(res<=N)
	{	
		if(last==N)
		{
			ans = true;
			break;
		}
		
		res = first + last;
		first = last;
		last = res;
	}
	
	if(ans)
		cout << "Yes";
	else
		cout << "No";
}
*/





