//                                                              Fahrenheit to Celsius Table
//                                                              ***************************
/*
Problem:
Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit 
values from Start to End at the gap of W, into their corresponding Celsius values and print the table.

Sample Input 1:
0 
100 
20
Sample Output 1:
0   -17
20  -6
40  4
60  15
80  26
100 37

Sample Input 2:
20
119
13
Sample Output 2:
20  -6
33  0 
46  7
59  15
72  22
85  29
98  36
111 43
*/

//***********************************************************************************************************************************************************************
//Solution:

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int S,E,W;  //Start Fahrenheit values, End Fahrenheit values, Step size 
	cin >> S >> E >> W;
	for(int i=S;i<=E;i+=W)
	{
		double C = ((i-32)*5)/9;
		cout << i << " " << C;
		cout << "\n";
	}
}

















