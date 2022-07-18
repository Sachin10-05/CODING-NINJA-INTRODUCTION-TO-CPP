/*
Problem:
-------
Given a string, determine if it is a palindrome, considering only alphanumeric characters.
Palindrome:
A palindrome is a word, number, phrase, or other sequences of characters which read the same backwards and forwards.

Sample Input 1 :
abcdcba
Sample Output 1 :
true 

Sample Input 2:
coding
Sample Output 2:
false
*/



//********************************************************************************************************************************************************************
//Solution:
//--------



#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(char str[])
{
	int size = strlen(str);
	int i=0;
	int j=size-1;
	while(i<j)
	{
		if(str[i] != str[j])
		{
			return 0;
		}
		i++;
		j--;
	}
	return 1;
}




int main()
{
	int size = 1e6;
	char str[size];
	cin >> str;
	cout << (checkPalindrome(str) ? "true" : "false" );
}

















