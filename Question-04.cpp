// 4.Define a function to print Pascal Triangle up to N lines.

#include <iostream>
using namespace std ;

int fact (int n)
{
    int i , f=1 ;
    for(i=n ; i>=1 ; i--)
        f = f*i ;
    return f ;
}

int combination (int n , int r)
{
    int comb ;
    comb = fact(n) / (fact(n-r)*fact(r)) ;
    return comb ;
}

void pascal (int line)
{
    int i,j,k,r ;
    for(i=1 ; i<=line ; i++)
    {
        k=1 ;
        r=0 ;
        for(j=1 ; j<=2*line-1 ; j++)
        {
            if (j>=line+1-i && j<=line-1+i && k)
            {
                cout<<combination(i-1 ,r)<<" " ;
                k=0 ;
                r++ ;
            }
            else 
            {
                cout<<" " ;
                k=1 ;
            }
        }
        cout<<endl ;
    }
}

int main ()
{
    int x ;
    cout<<"Enter line : ";
    cin>>x ;
    pascal(x) ;
    return 0 ;
}
