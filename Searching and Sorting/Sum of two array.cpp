/*
Two random integer arrays/lists have been given as ARR1 and ARR2 of size N and M respectively. Both the arrays/lists contain numbers from 0 to 9
(i.e. single digit integer is present at every index). The idea here is to represent each array/list as an integer in itself of digits N and M.

You need to find the sum of both the input arrays/list treating them as two integers and put the result in another array/list i.e. output array/list will
also contain only single digit at every index.

Sample Input 1:
1
3
6 2 4
3
7 5 6
Sample Output 1:
1 3 8 0

Sample Input 2:
2
3
8 5 2
2
1 3
4
9 7 6 1
3
4 5 9
Sample Output 2:
0 8 6 5
1 0 2 2 0 
*/

//********************************************************************************************************************************************************************


#include<bits/stdc++.h>
using namespace std;

void sumOfTwoArrays(int *arr1, int size1, int *arr2, int size2, int *output)
{
	int i = size1 - 1;
	int j = size2 - 1;
	int k = (size1 >= size2) ? size1 : size2;
	int carry = 0;
	
	while(k >= 0){
        output[k] = (arr1[i] + arr2[j] + carry)%10;
        carry = (arr1[i] + arr2[j] + carry)/10;
        if(i>0)
            i--;
        else{
            i=-1;
            arr1[i] = 0;
        }
        if(j>0)
            j--;
        else{
            j=-1;
            arr2[j] = 0;
        }
        k--;
    }
}





int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int size1;
		cin >> size1;
		int *arr1 = new int[size1];
		for(int i=0;i<size1;i++)
		{
			cin >> arr1[i];
		}
		
		int size2;
		cin >> size2;
		int *arr2 = new int[size2];
		for(int i=0;i<size2;i++)
		{
			cin >> arr2[i];
		}
		
		
		int outsize = 1 + max(size1,size2);  //size of resultant arr
		int *output = new int[outsize];      //resultant array
		
		sumOfTwoArrays(arr1, size1, arr2, size2, output);
		for(int i=0;i<outsize;i++)
		{
			cout << output[i] << " ";
		}
		
		delete[] arr1;
		delete[] arr2;
		delete[] output;
		cout << endl;
	}
	return 0;
}













