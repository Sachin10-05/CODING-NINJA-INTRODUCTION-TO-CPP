//                                                                       TRIANGLE OF NUMBERS
//                                                                       *******************

/*
Sample Input 1:
5
Sample Output 1:
    1
   232
  34543
 4567654
567898765

*/


//SOLUTION:

#include<iostream>
using namespace std;

int main()
{
	int N;
    cin >> N;
    
    int i=1;
    while(i<=N)
    {
        int j=1;
        while(j<=(N-i))
        {
            cout << " ";
            j++;
        }
        
        j=1;
        int x=i;
        while(j<=i)
        {
            cout << x;
            x++;
            j++;
		}
		
		j=2;
        int y=2*i - 2;
        while(j<=i)
        {
            cout << y;
            y--;
            j++;
		}
		
		cout << endl;
		i++;
    }
}





