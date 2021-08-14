#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t>0){
int a,rev=0,rem;
cout<<"Enter a number to reverse : ";
cin>>a;
while(a>0){
    rem= a%10;
    a=a/10;
      rev=rev*10+rem;
    }
    cout<<rev;
    t--;
} 
return 0;
}

