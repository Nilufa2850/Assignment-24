// 2. Define a function to find the highest value digit in a given number.

#include<iostream>
using namespace std ;
int highest_digit(int) ; 

int main ()
{
    int x ;
    cout<<"Enter a number : " ;
    cin >> x ;
    cout <<"highest value digit in " << x <<" is " << highest_digit (x) ;
    return 0 ;
}

int highest_digit(int n)
{
    int p , max = -9999 ;

    while (n)
    {
        p = n%10 ;

        if (p>max)
            max = p ;
        
        n = n/10 ;   
    }

    return max ;
    
}
