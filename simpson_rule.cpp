#include <bits/stdc++.h>
using namespace std;

float calculate(float num){
    return 1/(num+1);
}

int main(){
 float a,b,n;
 float h,area=0.0,sum=0.0;
 cout<<"Enter range to calculate integral\n";
 cin>>a>>b;
 cout<<"Enter the value of n\n";
 cin>>n;
 if(fmod(n,2)!=0){
     cout<<"\nIn Simpson Rule n must be even , program aborted .........\n";
     return 0;
 }else{
 h=(b-a)/n;
 for(int i=0;i<=n;i++){
   float x;
   x=a+(i*h);
   if(i==0||i==n){
       sum+=calculate(x);
   }else if(i%2==0){
       sum+=2*calculate(x);
   }else{
       sum+=4*calculate(x);
   }
   
 }
 area=(h/3)*sum;
 cout<<"\nThe area under the curve is : "<<area;
 
 return 0;
 }
}