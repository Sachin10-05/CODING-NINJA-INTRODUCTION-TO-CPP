/*
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome

Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always
*/



//*********************************************************************************************************************************************************************
//USING STRING
//************

/*
#include<bits/stdc++.h>
using namespace std;
string reverseWordWise(string str)
{
	int i = str.length()-1;
	string res;
	while(i>=0)
	{
		//spaces at end of the string
		while(i>=0 && str[i]==' ')
			i--;
		
		int j = i;
		
		//condition if spaces found at start of given string
		if(i<0)
			break;
		else
		{
			while(i>=0 && str[i] != ' ')
			i--;
		
			if(res.empty())
			{
				res += str.substr(i+1,(j-i+1));	
			}
			else
			{
				res = res + " " +  str.substr(i+1,(j-i));
			}
		}
	}
	return res;
}


int main()
{
	string str;
	getline(cin,str);
	cout << reverseWordWise(str);
}
*/




//********************************************************************************************************************************************************************































