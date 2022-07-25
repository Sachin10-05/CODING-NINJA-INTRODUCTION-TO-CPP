/*
Sample Input 1 :
this is test string
Sample Output 1 :
is

Sample Input 2 :
abc de ghihjk a uvw h j
Sample Output 2 :
a
*/




//******************************************************************************************************************************************************************



#include<bits/stdc++.h>
using namespace std;
void minLengthWord(string str)
{
	int len = str.length();
	int min = INT_MAX;     //initial length of word
	
	int start = 0;
	int end = 0;
	
	int i=0;
	while(i<len)
	{
		while(str[i] == ' ' &&  i<len)
			i++;
		int j=i;
		
		while(str[i] != ' ' && i<len)
			i++;
		
		int length = (i-j);
		if(length < min)
		{
			min = length;
			start = j;
			end = i-1;	
		}
				
		i++;
	}
//	cout << min << endl;     
	cout << str.substr(start,end-start+1);	
}


int main()
{
	string str;
	getline(cin,str);
	
	minLengthWord(str);
	return 0;
}















