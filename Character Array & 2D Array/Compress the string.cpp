/*
Sample Input 1:
aaabbccdsa
Sample Output 1:
a3b2c2dsa
Explanation for Sample Output 1:
In the given string 'a' is repeated 3 times, 'b' is repeated 2 times, 'c' is repeated 2 times and 'd', 's' and 'a' and occuring 1 time hence 
no compression for last 3 characters.

Sample Input 2:
aaabbcddeeeee
Sample Output 2:
a3b2cd2e5
Explanation for Sample Output 2:
In the given string 'a' is repeated 3 times, 'b' is repeated 2 times, 'c' is occuring single time, 'd' is repeating 2 times and 'e' is repeating 5times.
*/





//********************************************************************************************************************************************************************

//                                                                      USING STRING
//                                                                      ************

#include<bits/stdc++.h>
using namespace std;
string getCompressedString(string str)
{
	int len = str.length();
	string ans;
	int i=0;
	while(i<len)
	{
		int count=1;
		while(str[i] == str[i+1])
		{
			count++;
			i++;
		}
		if(count==1)
			ans += str[i];
		else
			ans += str[i] + to_string(count);
		
		i++;
	}
	return ans;
}



int main()
{
	string str;
	cin >> str;
	
	cout << getCompressedString(str);
	return 0;
}













