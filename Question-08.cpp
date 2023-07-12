// 8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle

#include<iostream>
using namespace std ;

float area (int) ;
int area (int, int) ;
float area (int , float) ;

int main ()
{
    int r ;
    cout<<"Enter a radius of a circle : ";
    cin>>r ;
    cout<<"Area of circle is "<<area(r) <<endl ;       // area of circle 

    int l , b ;
    cout<<"Enter Length and breadth of a rectangle : ";
    cin>>l>>b ;
    cout<<"Area of rectangle is "<<area(l,b)<<"\n" ;    // area of rectangle 

    int base ;
    float height ;
    cout<<"Enter base and height of truangle : ";
    cin >>base>>height ;
    cout<<"Area of a triangle is "<<area(base,height) ;     // area of triangle

    return 0 ;
}

float area (int r)
{
    return 3.14*r*r ;                   // area of circle
}

int area (int x, int y)
{
return x*y ;                            // area of rectengle
}

float area (int b , float h)
{
    return 0.5*b*h ;                    // area of triangle
}
