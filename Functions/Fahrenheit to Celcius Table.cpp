/*
Problem
-------
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
*/







//Solution

#include<bits/stdc++.h>
using namespace std;

void printTable(int start,int end,int step)
{
	for(int i=start;i<=end;i+=step)
	{
		int C = ((i-32)*5/9);
		cout << i << " " << C << "\n";
	}
}

int main()
{
    int start, end, step;
    cin >> start >> end >> step;
  
    printTable(start, end, step);
}







