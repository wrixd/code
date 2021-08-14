#include<iostream>
using namespace std;
int main(){
    
    cout<<"\nEnter a size of array : ";
    int a,num,j,i=0;
    cin>>a;
      int arr[a];
    while(i<a){
        cout<<"\nEnter the "<<i<<"th element of the array : ";
    
        cin>>arr[i];
        i++;
    }
    
    cout<<"\nEnter the sum number : ";
    cin>>num;
    
for(i=0;i<a;i++){
    for(j=i+1;j<a;j++){ ;
        if(arr[i]+arr[j]==num){
            
            break;
        }
    }
}
i-=2;
j-=2;
cout<<"\n The sum positions are : "<<i<<" "<<j-i;

return 0;
}