#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v1(10,0),v2(10,0);
    cout<<"Enter the array 1\t";
    for(int i=0;i<10;i++){
        int num;
        cin>>num;
        v1.push_back(num);
    }
    cout<<"Enter the array 2\t";
    for(int i=0;i<10;i++){
        int num;
        cin>>num;
        v2.push_back(num);
    }
    map<int,int> m1,m2;
    for(auto i=0;i<v1.size();i++){
        ++m1[v1[i]];
    }
    for(auto i=0;i<v2.size();i++){
        ++m2[v2[i]];
    }

    return 0;

}    