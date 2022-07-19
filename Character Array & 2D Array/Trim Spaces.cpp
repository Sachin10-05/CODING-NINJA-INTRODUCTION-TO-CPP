/*
Problem:
--------
Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.
There can be multiple spaces present after any word.

Input Format :  String S
Output Format : Updated string

Sample Input :
abc def g hi
Sample Output :
abcdefghi
*/



//*******************************************************************************************************************************************************************
//Time Complexity : O(N)




#include<bits/stdc++.h>
using namespace std;

string trimSpaces(char str[])
{
	int x=0;
	for(int i=0;str[i];i++)
	{
		if(str[i] != ' ')
			str[x++] = str[i];
	}
	str[x] = '\0';
	
	
	for(int i=0;i<strlen(str);i++)
	{
		cout << str[i];
	}
}





int main()
{
	char str[100000];
	cin.getline(str,100000);
	
	trimSpaces(str);
	cout << str << endl;
}




