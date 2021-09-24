#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<long long int> fact(int x){
    vector<long long int> ret;
    long long int num;
    if(x==0)
    {
        ret.push_back(1);
        return ret;
    }
    else
    {
        for(int i=num-1;i>1;i--){
             num*=num-1;
        }
        ret.push_back(num);
        return ret;
    }
}

    int main()
    {    int n;
        cin>>n;
        vector<int> num;
         num=fact(n);

        for(int i=0;i<num.size();i++){
            cout<<num[i];
        }
        return 0;
    }