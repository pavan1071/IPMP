#include<bits/stdc++.h>
using namespace std ;

int add(int x)
{
     unsigned int re = x ;
    unsigned int le = x ;
    re = re<<4 ;
    le = le>>4 ;
    x <<= 4 ;
    x >>=8 ;
    x <<= 4 ;
    return (x | le | re);
}
int main()
{
    cout <<  add(23);
    return 0;
}