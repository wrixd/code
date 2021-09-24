#include<iostream>
#include<vector>
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

int main(){
    long long int x;
    vector<int> dig( );

    int dig_sum;
    cin>>x;
    cout<<digsum(x);
    return 0;
}