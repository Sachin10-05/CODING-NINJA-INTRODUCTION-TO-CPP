/*
You have been given two integer arrays/list(ARR1 and ARR2) of size N and M, respectively. 
You need to print their intersection; An intersection for this problem can be defined when both the arrays/lists contain a particular
value or to put it in other words, when there is a common value that exists in both the arrays/lists.

Sample Input 1 :
2
6
2 6 8 5 4 3
4
2 3 4 7 
2
10 10
1
10
Sample Output 1 :
2 4 3
10


Sample Input 2 :
1
4
2 6 1 2
5
1 2 3 4 2
Sample Output 2 :
2 1 2
Explanation for Sample Output 2 :
Since, both input arrays have two '2's, the intersection of the arrays also have two '2's. The first '2' of first array matches 
with the first '2' of the second array. Similarly, the second '2' of the first array matches with the second '2' if the second array.
*/










//Solution:
//---------


#include<bits/stdc++.h>
using namespace std;

void intersection(int *arr1,int *arr2,int size1,int size2)
{
	int arr3[1000] = {0};
	for(int i=0;i<size1;i++)
	{
		for(int j=0;j<size2;j++)
		{
			if(arr1[i] == arr2[j]   &&   arr2[j] != arr3[j])
			{
				cout << arr1[i] << " ";	
				arr3[j] = arr2[j];
				break;
			}
			
		}	
	}	
}






int main()
{
	int t;  // no of test cases
	cin >> t;
	while (t--)
	{
		int size1, size2;
		cin >> size1;
		int *input1 = new int[size1];
		for (int i = 0; i < size1; i++)
		{
			cin >> input1[i];
		}

		cin >> size2;
		int *input2 = new int[size2];
		for (int i = 0; i < size2; i++)
		{
			cin >> input2[i];
		}

		intersection(input1, input2, size1, size2);
		
		delete[] input1;
		delete[] input2;
		
		cout << endl;
	}

	return 0;
}
















