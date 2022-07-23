/*
Sample Input 1:
aabccbaa
a
Sample Output 1:
bccb

Sample Input 2:
xxyyzxx
y
Sample Output 2:
xxzxx
*/


//*********************************************************************************************************************************************************************

//                                                                      USING STRING
//                                                                      ************

#include<bits/stdc++.h>
using namespace std;
string removeAllOccurencesOfChar(string str,char ch)
{
	string ans;
	for(int i=0;i<str.length();i++)
	{
		if(str[i] != ch)
		{
			ans += str[i];	
		}	
	}	
	return ans;
}


int main()
{
	string str;
	cin >> str;
	
	char ch;
	cin >> ch;
	
	cout << removeAllOccurencesOfChar(str,ch);
	return 0;
}
*/


//******************************************************************************************************************************************************************
  
//                                                                    USING CHARACTER ARRAY
//                                                                    *********************
  
  
#include<bits/stdc++.h>
using namespace std;
void removeAllOccurrencesOfChar(char str[], char c)
{
	int j=0;
	for(int i=0;str[i] != '\0';i++)
	{
		if(str[i] != c)
		{
			str[j] = str[i];
			j++;
		}
	}
	str[j] = '\0';
}


int main()
{
	int size  = 1e6;
	char str[size];
	cin.getline(str,size);
	
	char c;
	cin >> c;
	
	removeAllOccurrencesOfChar(str, c);
    cout << str;
}


