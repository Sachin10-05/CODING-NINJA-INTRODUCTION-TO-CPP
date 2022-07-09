//                                                                STAR PATTERN
//                                                                ************

/*
Sample Input 1 :
4
Sample Output 1 :
    *
   *** 
  *****
 *******
 
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
        while(j<=i)
        {
            cout << "*";
            j++;
        }
        
        j=2;
        while(j<=(i))
        {
        	cout << "*";
        	j++;
		}
		
        cout << endl;
        i++;
    }
}



