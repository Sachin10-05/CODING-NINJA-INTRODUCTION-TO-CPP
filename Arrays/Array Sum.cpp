/*
Problem:
--------
Given an array of length N, you need to find and print the sum of all elements of the array.
Sample Input :
3
9 8 9
Sample Output :
26
*/




//Solution

#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int arr[N];
    int sum = 0;
    for(int i=0;i<N;i++)
    {
        cin >> arr[i];
    }
    
    for(int i=0;i<N;i++)
    {
        sum += arr[i];
    }
    
    cout << sum;
}


