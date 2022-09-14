//                                              CHECK TRIANGLE (Equilateral, Isosceles, Scalene)
//                                              ************************************************

//Time complexity: O(1)

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a;  //side-1
  int b;  //side-2
  int c;  //side-3
  cin >> a >> b >> c;
  
  if(a==b && b==c)
    cout << "Equilateral Triangle";
  else if(a==b || b==c || c==a)
    cout << "Isosceles Triangle";
  else
    cout << "Scalene Triangle";
}
  
  
  
  
