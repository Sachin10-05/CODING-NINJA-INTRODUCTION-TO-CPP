//                                                                                CHECK CASE
//                                                                                **********
/*
//Problem:
//*******
Write a program that takes a character as input and prints either 1, 0 or -1 according to the following rules.
1, if the character is an uppercase alphabet (A - Z)
0, if the character is a lowercase alphabet (a - z)
-1, if the character is not an alphabet

Sample Input 1 :
v
Sample Output 1 :
0

Sample Input 2 :
V
Sample Output 2 :
1

Sample Input 3 :
#
Sample Output 3 :
-1

*/

//*******************************************************************************************************************************************************************
//Solution:
**********





#include<bits/stdc++.h>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	int res = (int)ch;
	if(res>=65 && res<=90)       //Uppercase
		cout << 1;
	else if(res>=97 && res<=122) //Lowercase
		cout << 0;
	else
		cout << -1;
}



