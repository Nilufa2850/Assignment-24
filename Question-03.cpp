// 3. Define a function to calculate x raised to the power y.

#include<iostream>
using namespace std ;
int power (int,int) ;

int main ()
{
    int x ,y ,p ;
    cout <<"Enter number : ";
    cin>>x ;
    cout <<"Enter power : ";
    cin>>y ;

    p = power (x,y) ;

    cout<<x<<" raised to the power "<<y<<" is "<<p ;
    return 0 ;
}

int power (int m , int n)
{
    int i , multiple = 1 ;

    for(i=1 ; i<=n ; i++)
        multiple = multiple*m;

    return multiple ;
}
