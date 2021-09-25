#include<bits/stdc++.h>
using namespace std;


int  modularExponentiation(int x,int n)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x),n/2);
    else                             //n is odd
        return (x*modularExponentiation((x*x),(n-1)/2));

}

int main(){

    int x=8,n=4;
   int ans= modularExponentiation(x,n);
   cout<<"Ans is "<<endl<<ans;
    return 0;

}