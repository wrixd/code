#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[10];
    for(int i=0;i<10;i++){
        cout<<"Enter a no : \n";
        cin>>arr[i];
    }
    vector<int> result;
    sort(arr,arr+10);
    for(int i=0;i<10;i++){
        if(arr[i]<arr[i+1]){
            result.push_back(arr[i]);
        }
    }

    for(int i=0;i<result.size();i++){
        cout<<endl<<result[i];
    }

    return 0;

}


    





