#include <bits/stdc++.h>
using namespace std;

float calculate(float num){
    return (num*num)+1;
}

int main(){
 float a,b,n;
 float h,area=0.0,sum=0.0;
 cout<<"Enter range to calculate integral\n";
 cin>>a>>b;
 cout<<"Enter the number of trapezoids\n";
 cin>>n;
 h=(b-a)/n;
 for(int i=0;i<=n;i++){
   float x;
   x=a+(i*h);
   if(i==0||i==n){
    sum+=0.5*calculate(x);
   }else{
   sum+=calculate(x);
   }
   cout<<x<<"\t"<<calculate(x)<<endl;
 }
 area=h*sum;
 cout<<"\nThe area under the curve is : "<<area;
 
 return 0;
}