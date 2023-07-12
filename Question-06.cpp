// 6. Define a function to swap data of two int variables using call by reference.

#include<iostream>
using namespace std ;

int main ()
{
    int a , b ;
    cout<<"enter two values : ";
    cin>>a>>b ;

    swap (a,b) ;
    cout<<"a = "<<a<<" and b = "<<b ;
    return 0 ;
}

void swap (int &m , int &n)
{
    int t ;
    t = m ;
    m = n ;
    n = t ;
}

