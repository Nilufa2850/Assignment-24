// 7. Write a function using the default argument that is able to add 2 or 3 numbers.

#include<iostream>
using namespace std ;
int add (int , int , int=0) ;  // default value set 

int main ()
{
    int a , b ,c ;
    cout<<"enter two values : ";
    cin>>a>>b ;
    cout<<"Sum of "<<a<<" and "<<b<<" is "<<add(a,b);
    cout <<endl ;

    cout<<"Enter three values : ";
    cin>>a>>b>>c ;
    cout<<"Sum of "<<a<<" , "<<b<<" and "<<c<<" is "<<add(a,b,c) ;
    return 0 ;
}

int add (int x , int y , int z)
{
    return x+y+z ;
}

