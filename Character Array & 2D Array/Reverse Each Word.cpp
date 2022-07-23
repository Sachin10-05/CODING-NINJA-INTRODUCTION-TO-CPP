/*
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
emocleW ot gnidoC sajniN

Sample Input 2:
Always indent your code
Sample Output 2:
syawlA tnedni ruoy edoc
*/



//**********************************************************************************************************************************************************************

//                                                                        USING STRING
//                                                                        ************


#include<bits/stdc++.h>
using namespace std;
string reverse(string temp)
{
	int len = temp.length();
	int i=0;
	int j=len-1;
	while(i <= j)
	{
		swap(temp[i],temp[j]);
		i++;
		j--;
	}
	return temp;
}


string reverseEachWord(string str)
{
	string ans;
	int N = str.length();  // length of string
	
	int i = 0;
	while(i<N)
	{
		while(str[i] >= 0 && str[i] == ' ')
			i++;
		int j = i;
		while(str[i] >= 0 && str[i] != ' ')
			i++;
		
		string temp = str.substr(j,(i-j));

		if(ans.empty())
		{
			ans += reverse(temp);	
		}
		else
		{
			ans = ans + " " +  reverse(temp);
		}
		
		i++;
	}
	return ans;
}


int main()
{
	string str;
	getline(cin,str);
	
	cout << reverseEachWord(str);
	return 0;
}








//***************************************************************************************************************************************************************


//                                                              USING CHARACTER ARRAY
//                                                              *********************



#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int size = 1e6;
    char str[size];
    cin.getline(str, size);
    reverseEachWord(str);
    cout << str;
}


void reverse(char input[], int start, int end)
{
    int i = start, j = end;
    while(i < j)
    {
        char temp = input[i];
        input[i] = input[j];
        input[j] = temp;
        i++;
        j--;
    }
}


void reverseEachWord(char input[])
{
    int start = 0, end = 0;
    int i;
    for(i = 0; input[i] != '\0'; i++)
    {
        if(input[i] == ' ')
        {
            end = i - 1;
            reverse(input, start, end);
            start = i + 1;
        }
    }
    end = i - 1;
    reverse(input, start, end);
}














