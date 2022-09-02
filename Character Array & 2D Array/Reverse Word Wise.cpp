/*
Sample Input 1:
Welcome to Coding Ninjas
Sample Output 1:
Ninjas Coding to Welcome

Sample Input 2:
Always indent your code
Sample Output 2:
code your indent Always
*/



//*********************************************************************************************************************************************************************
//USING STRING
//************

/*
#include<bits/stdc++.h>
using namespace std;
string reverseWordWise(string str)
{
   int n = str.length();
   int i = n-1;
   string res = "";
   while(i>=0)
   {
      //spaces at end of the string
      while(i>=0 && str[i]==' ')
         i--;
      int j = i;
      
      while(i>=0 && str[i] != ' ')
	 i--;
      if(res.empty())
         res += str.substr(i+1,(j-i+1));	
      else
         res = res + " " +  str.substr(i+1,(j-i));
    }
    return res;
}


int main()
{
   string str;
   getline(cin,str);
   cout << reverseWordWise(str);
}
*/




//********************************************************************************************************************************************************************


//USING STRING   ☑☑☑☑☑☑☑☑☑
//************

/*
#include<bits/stdc++.h>
using namespace std;
string reverseWordWise(string str)
{
   int n = str.length();
   int i = n-1;
   string res = "";
   while(i>=0)
   {
      while(i>=0 && str[i]==' ')
         i--;
      int j = i;
      while(i>=0 && str[i] != ' ')
	 i--;
      string temp = str.substr(i+1, j-i);
      res += temp + " ";
    }
    return res;
}


int main()
{
   string str;
   getline(cin,str);
   cout << reverseWordWise(str);
}
*/




//********************************************************************************************************************************************************************



//USING STRING   ☑☑☑☑☑☑☑☑☑
//************


#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s = "eye of the tiger";
   vector<string> ans;
   string temp = "";
   for(int i=0;i<s.length();i++)
   {
      if(s[i] != ' ')
	 temp += s[i];
      else
      {
         ans.push_back(temp);
	 temp = "";
      }
   }
	
   if(temp != "")
       ans.push_back(temp);
		
   for(int i=ans.size()-1;i>=0;i--)
       cout << ans[i] << " ";
   return 0;
}






//********************************************************************************************************************************************************************
















