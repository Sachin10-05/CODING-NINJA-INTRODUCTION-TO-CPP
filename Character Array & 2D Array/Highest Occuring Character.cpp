/*
/*
Sample Input 1:
abdefgbabfba
Sample Output 1:
b

Sample Input 2:
xy
Sample Output 2:
x
*/


//*********************************************************************************************************************************************************************
//                                                                      USING STRING
//                                                                      ************

/*
#include<bits/stdc++.h>
using namespace std;
char highestOccuringChar(string str)
{
	//character array to store count of all character
	int arr[26] = {0};
	for(int i=0;i<str.length();i++)
	{
		arr[str[i] - 'a']++;
	}
	
	char ans = 'a';
	int max = 0;
	for(int i=0;i<26;i++)
	{
		if(arr[i] > max)
		{
			max = arr[i];
			ans = i + 'a';
		}
	}
	cout << max << "\n";
	return ans;
}


int main()
{
	string str;
	cin >> str;
	cout << highestOccuringChar(str);
	return 0;
}
*/



//*******************************************************************************************************************************************************************

//                                                              USING CHARACTER ARRAY
//                                                              *********************

#include<bits/stdc++.h>
using namespace std;
char highestOccurringChar(char input[]) 
{
    char result;
  	int i, len;
  	int max = -1;
  	
  	int freq[256] = {0}; 
 
  	len = strlen(input);
  	
  	for(i = 0; i < len; i++)
  	{
  		freq[input[i]]++;
	}
  		
  	for(i = 0; i < len; i++)
  	{
		if(max < freq[input[i]])
		{
			max = freq[input[i]];
			result = input[i];
		}
	}
  	return result;
}



int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    cout << highestOccurringChar(str);
}






