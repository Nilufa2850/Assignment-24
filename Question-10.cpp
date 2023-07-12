/*10. Write functions using function overloading to add two numbers having different data
types.*/

#include<iostream>
using namespace std ;
float add (float, float) ;
int add (int, int) ;

int main ()
{
    int p,q ;
    cout<<"Enter two integer numbers : ";
    cin>>p>>q ;
    cout<<"Add of two integer is "<<add(p,q) ;
    cout<<endl ;
    float m,n ;
    cout<<"Enter two real constant : ";
    cin>>m>>n ;
    cout<<"Add of two real constant is "<<add(m,n) ;
    return 0 ;
}


float add (float x, float y)
{
    return x+y ;
}
int add (int a, int b)
{
    return a+b ;
}
