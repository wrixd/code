#include<iostream>
using namespace std;

int digsum(long long int x){
   long long int rem=0,num=0;
   while(x>0){
       rem=x%10;
       num=num+rem;
       x=x/10;
   }
   return num;
}
vector<int> dig( )


int main(){
    long long int x;
    int dig_sum;
    cin>>x;
    cout<<digsum(x);
    return 0;
}