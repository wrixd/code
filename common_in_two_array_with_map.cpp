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
   
    cout<<"\nCommon elements are\t\n";
    int i=0;
    for( auto i1=m1.begin();i1!=m1.end();++i1){
         int element1 =m2[i1->first];
         int element2 =i1->second;
         if((element1==element2)&&element2==1){
             printf("%d",i1->first);
         }
         if(element1>0){
             
             
             for(int i=0;i<abs(element1-element2);i++){
                 printf("%d",i1->first);
             }
             cout<<"\t";
         }
    }
    
    return 0;
}