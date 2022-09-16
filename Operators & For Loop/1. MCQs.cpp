1) What is the output
  #include <iostream>
  using namespace std;
  int main() 
  {
    int x, y = 1;
    x = 10;
    if (x != 10 && x / 0 == 0)
      cout << y;
    else
      cout << ++y;
  } 

  Ans:- 2
  Explaination: Even though you get the output as '2', you'll also get a "division by zero" warning. 
                The reason you only get a warning but not an error is short-circuit evaluation. 
                In the if statement, once the first condition (x != 10) is evaluated to be false, then the second condition (x / 0 == 0) is not even executed 
                because the result of the overall condition (x != 10 && x / 0 == 0) will be false. Even if the second condition were true, 
                it would not change the overall result of the two conditions.

                However, if the value of x or the first condition itself is changed so that it evaluates to true, then you will get an error because in that 
                case the second condition would also be checked (or executed).
                  
                  
****************************************************************************************************************************************************************************

2) What is the output
  #include <iostream>
  using namespace std;
  int main()
  {   
    int x = 15;
    int y = x++;
    int z = ++x;
    cout << y << “ “ << z;
  }

  Ans:- 15 17
    
    
******************************************************************************************************************************************************************************
    
3) What is the output
  #include <iostream>
  using namespace std;
  int main() 
  {        
     int g = 3;
     cout << (++g * 8);
  }

  Ans:- 32
    
    
******************************************************************************************************************************************************************************

4) What is the output
  #include <iostream>
  using namespace std;
  int main()
  {
    int x = 10;
    int y = 20;
    if(x++ > 10 && ++y > 20 )
    {
      cout << "Inside if ";
    } 
    else
    {
      cout << "Inside else ";
    }
    cout << x << “ “ << y;
  }

  Ans:- Inside else 11 20
    
    
*****************************************************************************************************************************************************************************
 
5) What is the output
  #include <iostream>
  using namespace std;
  int main()
  {
    int x = 10;
    int y = 20;
    if(x++ > 10 || ++y > 20 )
    {
      cout << "Inside if ";
    }
    else
    {
      cout << "Inside else ";
    }
    cout << x << “ “ << y;
  }

  Ans:- Inside if 11 21
    
    
**************************************************************************************************************************************************************************
                  
6) What is the output
  What will be the output the following code ?
  for(int i = 0; i < 5; i = i + 1)
  {
    cout << i << " ";
    i = i + 1;
  }

  Ans:- 0 2 4
    
    
**************************************************************************************************************************************************************************

7) What is the output
  What will be the output the following code?
  for(int i = 1; i < 5; i = i + 1)
  {
    cout << i << " ";
    i = i - 1;
  }

  Ans:- Infine 1's
    
    
***************************************************************************************************************************************************************************

8) What is the output
  What will be the output ?
  for(int i = 0; i < 2; i = i + 1) 
  {
     for(int j = 0; j < 2; j = j + 1) 
     {
         if (j == 1)
            break;
         cout << j << " ";
     }
  }

  Ans:- 0 0
    
   
*****************************************************************************************************************************************************************************

9) What will be the output ?
  for(int i = 0; i < 5; i = i + 1) 
  {
     if(i == 2) 
       continue;
      cout << i << " ";
  }

  Ans:- 0 1 3 4
    
    
*****************************************************************************************************************************************************************************

10) Skip iteration
    Which of these jump statements can skip processing remainder of code in its body for a particular iteration ?
    a) break
    b) return 
    c) continue ✔
    
    Explaination: * "break" is used to exit from the current loop.
                  * "return" statement is used to exit from the current function.
                  * "continue" is used to skip the current iteration of a loop and continue with the next iteration.
    
    
***************************************************************************************************************************************************************************

11) What is the output
  int i = 1;
  while(i < 5) 
  {
    if(i == 3) 
    {
       break;
    }
    cout << i << " ";
    i++;
  }

  Ans:- 1 2 
    
    
******************************************************************************************************************************************************************************

12) What is the output
    int i = 1;
    while(i < 5) 
    {
      if(i == 3)
      {
        continue;
      }
      cout << i << " ";
      i++;
    } 

  Ans:- 1 2 Infinite loop
  

**************************************************************************************************************************************************************************

13) What is the output
    int i = 1;
    while(i < 3) 
    {
      int j = 1;
      while(j < 5) 
      {
        if(j == 3)
        {
            break;
        }
        cout << j << " ";
        j++;
      }
      i++;
    }

  Ans:- 1 2 1 2
    
 
*****************************************************************************************************************************************************************************

14) What is the output
    int i = 1;
    while(i < 3) 
    {
      int j = 0;
      while(j < 5) 
      {
        j++;
        if(j == 3) 
        {
            continue;
        }
        cout << j << " ";
      }
      i++;
    }

  Ans:- 1 2 4 5 1 2 4 5
    
    
****************************************************************************************************************************************************************************

15) Check error
    Will following code generate error ?
    #include <iostream>
    using namespace std;
    int main() 
    {
      int a = 10;
      if(a > 5) 
      {
        int b = 10;
      }
      cout << b << endl;
    }

  Ans:- Yes
  
  
****************************************************************************************************************************************************************************

16) Check error
  Will following code generate error ?
  #include <iostream>
  using namespace std;
  int main() 
  {
    int a = 10;
    if(a > 5)
    {
        int a = 100;
    }
    cout << a << endl;
  }

  Ans:- No
  
  
****************************************************************************************************************************************************************************

17) Fill the output
What is the output ?
#include <iostream>
using namespace std;
int main() 
{
    int a = 10;
    if(a > 5) 
    {
        int a = 100;
    }
    else 
    {
        int a = 110;
    }
    cout << a << endl;
}

Ans:- 10
  

********************************************************************************************************************************************************************************

18) Check the error
  Will following code generate error ?
  #include <iostream>
  using namespace std;
  int main() 
  {
    for(int i = 0; i < 3; i++) 
    {
        cout << i << " ";
    }
    cout << i << " ";
  }

  Ans:- Yes
  
  
****************************************************************************************************************************************************************************

19) What is the output
What is the output ?
#include <iostream>
using namespace std; 
int main() 
{
    int a = 10;
    while(a > 5) 
    {
        int a = 1;
        cout << a << " ";
        a--;
    }
}

Ans:- Infinite Loop


*****************************************************************************************************************************************************************************

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
  
    
    
