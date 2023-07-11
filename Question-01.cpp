// 1. Define a function to check whether a given number is a Prime number or not.

#include<iostream>
using namespace std ;

void checkprime(int) ;
void checkprime(int n)
{
    int i ;
    for (i=2 ; i<n ; i++)
    {
        if (n%i == 0)
            break ;
    }
    if (i==n)
        cout <<n<<" is prime." ;
    else    
        cout <<n<<" isn't prime." ;
}

int main ()
{
    int x ;
    cout<<"Enter a number : ";
    cin>>x ;
    checkprime(x) ;
    return 0 ;
}
