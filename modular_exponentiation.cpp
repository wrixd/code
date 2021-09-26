#include<bits/stdc++.h>
using namespace std;


int  modularExponentiation(int x,int n,int M)
{
    if(n==0)
        return 1;
    else if(n%2 == 0)        
        return modularExponentiation((x*x)%M,n/2,M);
    else                             
        return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;

}

int main(){

    int a,b,c,m;
    cin>>a>>b>>c>>m;
    cout<<(modularExponentiation(a,b,3)/c)%m;
    return 0;
}