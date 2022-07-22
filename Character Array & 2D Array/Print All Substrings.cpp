/*
Sample Input 1:
abc
Sample Output 1:
a 
ab 
abc 
b 
bc 
c 

Sample Input 2:
co
Sample Output 2:
c 
co 
o
*/


//********************************************************************************************************************************************************************

//										USING STRING
//										************

/*
#include<bits/stdc++.h>
using namespace std;
void printSubstrings(string str)
{
 	for(int i=0;i<str.length();i++)
	{
		for(int j=1;j<str.length()+1;j++)
		{
			if(i+j <= str.length())
				cout << str.substr(i,j) << "\n";
		}
	}
}

int main()
{
	string str;
	cin >> str;
	printSubstrings(str);
	return 0;
}
*/



//******************************************************************************************************************************************************************



//									USING CHARACTER ARRAY
//									*********************

#include<bits/stdc++.h>
using namespace std;
void printSubstrings(char input[])
{
    for(int i=0;i<=input[i]!='\0';i++)
    {
        for(int j=i;input[j]!='\0';j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout << input[k];
            }
            cout << "\n";
        }
    }
}


int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}







































