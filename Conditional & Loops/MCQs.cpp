1) What is the output
  #include <iostream>
  using namespace std;
  int main()
  {
    int x = 5; 
    if (x < 6)
        cout <<  “Hello ”;
    if(x == 5)
    {
        cout << “Hi ”;
    }
    else 
    { 
        cout << “Hey ”;
    } 
  }

  Ans:- Hello Hi


*********************************************************************************************************************************************************************

2) What is the output
  #include <iostream>
  using namespace std;
  int main() 
  {
    int x = 15;
    if(x <= 15) 
    {
        cout << "Inside if ";
    } 
    else if(x == 15)
    {
        cout << "Inside else if ";
    }
    cout << x;
  }

  Ans:- Inside if 15
  Explaination: The condition inside if is true, hence statement "Inside if" will be printed. 
                After that, we'll directly jump to statement : cout << x. So, after that 15 will be printed.


********************************************************************************************************************************************************************

3) What is the output
  #include <iostream>
  using namespace std; 
  int main()
  {
     int var1 = 5; 
     int var2 = 6;
     if ((var2 = 1) == var1)
        cout << var2;
     else 
        cout  << (var2 + 1); 
  } 

  Ans:- 2
  Explaination: Inside if condition, we are doing if((var2 = 1) == var1), So first 1 will be assigned to var2 and then it'll be compared with var1.
                Before comparison, var2 = 1 and var1 = 5, which are not equal. So, we'll move to else part and there the value of (var2 + 1) i.e. 
                2 will be printed.
    
    
*******************************************************************************************************************************************************************

4) If statement
  For what values of the x is an if-statement block not executed ?
  if((1+x) != (1-x)) 
  {
     cout<<"In if block";
  }    
  
  Ans:- 0
  Explaination: The if-statement block is only not executed when the value of x is  0. For all other values, it will be treated as true.
    
    
*******************************************************************************************************************************************************************

5) What is the output
  #include <iostream>
  using namespace std;
  int main() 
  {
    int a = 10, b = 20, c = 100;
    if(a <= b || c <= b) 
    {
        cout << "hello" << endl;
    }
    else if(a <= b || a <= c)
    {
        cout << "hi" << endl;
    }
    else 
    {
        cout << "hey" << endl;
    }
  }

  Ans:- hello
    
    
*******************************************************************************************************************************************************************

6) What is the output
  #include <iostream>
  using namespace std;
  int main() 
  {
    int a = 10, b = 20, c = 30;
    if(a <= b && !b) 
    {
        cout << "hello";
    }
    else if(c >= a && c >= b) 
    {
        cout << "hi";
    }
    else 
    {
        cout << "hey";
    }
  }

  Ans:- hi
  
  
******************************************************************************************************************************************************************
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
