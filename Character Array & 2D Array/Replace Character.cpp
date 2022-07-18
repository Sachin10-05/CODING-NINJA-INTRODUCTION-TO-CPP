/*
Problem:
--------
Given an input string S and two characters c1 and c2, you need to replace every occurrence of character c1 with character c2 in the given string.
Input Format :
Line 1 : Input String S
Line 2 : Character c1 and c2 (separated by space)

Output Format : Updated string

Sample Input :
abacd
a x
Sample Output :
xbxcd
*/


//********************************************************************************************************************************************************************



#include<bits/stdc++.h>
using namespace std;
string replaceCharacter(string str,char c1,char c2)
{
	for(int i=0;str[i] != '\0';i++)
	{
		if(str[i] == c1)
		{
			str[i] = c2;	
		}	
	}
	return str;	
}





int main()
{
	string s;
	cin >> s;
	
	char c1,c2;
	cin >> c1 >> c2;
	
	string res = replaceCharacter(s,c1,c2);
	cout << res;
}



