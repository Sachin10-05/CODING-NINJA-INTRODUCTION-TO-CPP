/*
Problem
-------
Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and 
white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'. That is, input will be a stream of characters and you need to consider 
all the characters which are entered till '$'. Print count of characters, count of digits and count of white spaces respectively (separated by space).

Sample Input :
abc def4 5$
Sample Output :
6 2 2
*/






//SOLUTION
//--------

#include<iostream>
using namespace std;

int main()
{
	char c;
    c = cin.get();
    
    int c1=0;     // count of character
    int c2=0;     // count of digits
    int c3=0;     // count of spaces
    while(c != '$')
    {
       
        if(c>=97 && c<=122)
            c1++;
        else if(c=='0' || c=='1' || c=='2' || c=='3' || c=='4' || c=='5' || c=='6' || c=='7' || c=='8' || c=='9')
            c2++;
        else if(c==' ' || c=='\t' || c=='\n')
            c3++;
         c = cin.get();
    }
    cout << c1 << " " << c2 << " " << c3;
}


