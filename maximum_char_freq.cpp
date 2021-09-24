#include <iostream>
#include<map>

using namespace std;
int main(){
    
    string str;
    cout<<"Enter a string"<<endl;
    cin>>str;
    map<char,int> mp;
    int sum=0;
    for(int i=0;i<str.length();i++){
     sum+=mp[str[i]];
     ++mp[str[i]];
    }
    int max=mp['a'];
   for(int i=0;i<mp.size();i++){
       if(mp[i]>max){
           max=mp[i];
       }
    }
    cout<<"Printing map"<<endl;
    for(auto it = mp.begin(); it != mp.end(); ++it) {
        cout<<" "<<it->first<<"|"<<it->second<<"\t"<<endl;
    }

    cout<<"\nmax frequency\t"<<max;    
    return 0;
}