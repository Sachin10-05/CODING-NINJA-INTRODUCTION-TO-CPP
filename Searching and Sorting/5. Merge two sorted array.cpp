/*
Problem:
You have been given two sorted arrays/lists(ARR1 and ARR2) of size N and M respectively, merge them into a third array/list such that the third array is also sorted.

Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
0 <= M <= 10^5
Time Limit: 1 sec 

Sample Input 1 :
1
5
1 3 4 7 11
4
2 4 6 13
Sample Output 1 :
1 2 3 4 4 6 7 11 13 
*/



********************************************************************************************************************************************************************************


//using two-pointer algirithm
******************************


#include<bits/stdc++.h>
using namespace std;

void merge(int *arr1, int n1, int *arr2, int n2, int *ans)
{
    int i=0;
    int j=0;
    int x = 0;
    while(i<n1 && j<n2)
    {
        if(arr1[i] < arr2[j])
        {
            ans[x] = arr1[i];
            x++;
            i++;
        }
        else
        {
            ans[x] = arr2[j];
            x++;
            j++;
        }
    }
    
    while(i<n1)
    {
        ans[x] = arr1[i];
        x++;
        i++;
    }
    
    while(j<n2)
    {
        ans[x] = arr2[j];
        x++;
        j++;
    }
}






int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size1;
		cin >> size1;
    int *arr1 = new int[size1];
    for (int i = 0; i < size1; i++)
		{
			cin >> arr1[i];
		}

		int size2;
		cin >> size2;
    int *arr2 = new int[size2];
    for (int i = 0; i < size2; i++)
		{
			cin >> arr2[i];
		}

		int *ans = new int[size1 + size2];

		merge(arr1, size1, arr2, size2, ans);

		for (int i = 0; i < size1 + size2; i++)
		{
			cout << ans[i] << " ";
		}

		cout << endl;
		delete[] arr1;
		delete[] arr2;
		delete[] ans;
	}
}





**************************************************************************************************************************************************************************










