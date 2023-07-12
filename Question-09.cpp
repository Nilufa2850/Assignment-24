/*9. Write functions using function overloading to find a maximum of two numbers and
both the numbers can be integer or real.*/

#include<iostream>
using namespace std ;
void max (float, float) ;
void max (int, int) ;

int main ()
{
    int p,q ;
    cout<<"Enter two numbers : ";
    cin>>p>>q ;
    max(p,q) ;
    cout<<endl ;
    float m,n ;
    cout<<"Enter two numbers : ";
    cin>>m>>n ;
    max(m,n) ;
    return 0 ;
}


void max (float x, float y)
{
    if (x>y)
        cout<<"Maximum number is "<<x ;
    else
        cout<<"Maximum number is "<<y ;
}
void max (int a, int b)
{
    if (a>b)
        cout<<"Maximum number is "<<a ;
    else
        cout<<"Maximum number is "<<b ;
}
