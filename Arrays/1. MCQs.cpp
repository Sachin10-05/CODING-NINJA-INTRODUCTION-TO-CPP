1) Which of the following correctly declares an array of size 10 ?
   a) int array[10]; ✔
   b) int array;
   c) array{10};
   d) array array[10];


************************************************************************************************************************************************************************

2) What will be the output of the following code ?
   int arr[100];
   cout << arr[0];
   
   a) 0
   b) 0 and Garbage value ✔
   c) Error
   
   
***********************************************************************************************************************************************************************

3) What is the index number of the last element of an array with 5 elements ?
Ans:- 4
  
  
***********************************************************************************************************************************************************************

4) Which of the following accesses the third element stored in array?
   a) array[3]
   b) array[2] ✔
   c) array(3)
   d) array
   
   
***********************************************************************************************************************************************************************

5) What is the correct syntax for passing array to a function -
   void func(int a[]) 
   {
   }
  
   int main() 
   {
     int a[10];
     // Call function "func" and pass array a
   }

   a) func(a[]);
   b) func(a[10]);
   c) func(int a[10]);
   d) func(a); ✔


**********************************************************************************************************************************************************************

6) What is the output
   #include <iostream>
   using namespace std;
   int main() 
   {
     int a[10];
     cout << sizeof(a) << endl;
   }

   Ans:- 40
     
     
*********************************************************************************************************************************************************************

7) What is the output
   Assume an integer takes 4 bytes and a pointer takes 8 bytes.
   #include <iostream>
   using namespace std;
   void func(int a[]) 
   {
     cout << sizeof(a) << endl;
   }
   int main() 
   {
     int a[10];
     func(a);
   }

  a) 10
  b) 40
  c) 4
  d) 8 ✔
  Explaination: When an array is passed as an argument to function then it act as pointer so its size is of 8 bytes.
  
  
********************************************************************************************************************************************************************
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
