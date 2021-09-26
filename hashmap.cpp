//sum of all subsets
#include <bits/stdc++.h>
using namespace std;

int main(){
     system("cls");
  
    int nums[10];
    int num,result=0;
    for(int i=0;i<10;i++){
        printf("Enter %d number for array :",i);
        cin>>nums[i];
    }
    for(int i=0;i<10;i++){
        for(int i=0;i<10;i++){
           for(int i=0;i<10;i++){
            result+=nums[i];
         }
     }
    }
    cout<<"\nThe sum is : "<<result;
        return 0;
}