                                                                              FIND GCD or HCF
                                                                              ***************

//using recursion
//using Euclidean Algorithm by modulo

//Time complexity:   O(log(min(a,b)))
//space complexity:  O(log(min(a,b))

int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main() 
{
    int a;
    int b;
    cin >> a >> b;
    cout << gcd(a,b);
}


//***********************************************************************************************************************************************************************


//Time complexity:  O(min(a,b))
//Space complexity: O(1)

/*
int main() 
{
    int a;
    int b;
    cin >> a >> b;
    
    int res = min(a,b);
    while (res > 0) 
    {
        if (a % res == 0 && b % res == 0) 
        {
            break;
        }
        res--;
    }
    cout << res; 
}
*/

