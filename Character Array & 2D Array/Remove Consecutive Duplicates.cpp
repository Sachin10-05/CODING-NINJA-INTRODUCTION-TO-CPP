/*
Sample Input 1:
aabccbaa
Sample Output 1:
abcba

Sample Input 2:
xxyyzxx
Sample Output 2:
xyzx
*/




//*******************************************************************************************************************************************************************

//                                                                        USING STRING
//                                                                        ************
#include<bits/stdc++.h>
using namespace std;
string removeConsecutiveDuplicates(string str)
{
	string ans;
	int i=0;
	while(i<str.length())
	{
		while(str[i] == str[i+1])
			i++;
		
		ans += str[i]; 
		i++;
	}
	return ans;
}




int main()
{
	string str;
	cin >> str;
	
	cout << removeConsecutiveDuplicates(str);
}


//*******************************************************************************************************************************************************************


//                                                                  USING CHARACTER ARRAY
//                                                                  *********************


#include <iostream>
#include <cstring>
using namespace std;
#include "solution.h"




void removeConsecutiveDuplicates(char input[]) 
{
    int nextIndex = 1;
    char lastChar = input[0];
    for(int i = 0; input[i] != '\0';) 
    { 
        if(input[i] == lastChar) 
        { 
            i++; 
        } 
        else 
        {
            input[nextIndex] = input[i];
            nextIndex++; 
            lastChar = input[i];
            i++;
        }
    }
    input[nextIndex] = '\0';
}







int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}






















