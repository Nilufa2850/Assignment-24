// 5. Define a function to check whether a given number is a term in a Fibonacci series or not.

#include<iostream>
using namespace std ;

void fibo (int num)
{
    int a=-1 , b=1 , c ,i ;

    if (num==0 || num==1)
        cout<<num<<" is fibonacci";
    else
        while(1)
        {
            c = a+b ;
            a = b ;
            b = c ; 
            if (c == num)
            {
                cout<<num<<" is a fibonacci number" ;
                break ;
            }
            else if (c > num)
            {
                cout<<num<<" is not fibonacci";
                break ;
            }
        }
    
}

int main ()
{
    int x ;
    cout<<"Enter a number : ";
    cin>>x ;
    fibo(x) ;
    return 0 ;
}
