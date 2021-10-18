#include<bits/stdc++.h>


int main(){
    vector<char> newp;
    cout<<"Enter a string"<<endl;
    gets(newp);
    //count max frequency letter
    map<char,int> mp;
    int sum=0;
    for(int i=0;i<newp.size();i++{
      sum+=mp[newp[i]];
      ++mp[newp[i]];
    }
    int currentMax=0;
    for(auto it = mp.begin(); it != mp.end(); ++it ) {
    if (it ->second > currentMax) {
        arg_max = it->first;
        currentMax = it->second;
    }
    cout<<currentMax;
}
    

    
    return 0;
}