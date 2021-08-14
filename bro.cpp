#include<iostream>
using namespace std;
int main(){
    int i=1,end,s=0;
    cin>>end;
while(i<=end){
    s+=i;
    i++;
}
cout<<endl<<s;
return 0;
}