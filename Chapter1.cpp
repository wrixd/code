#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> square(100);
    for(int i=1;i<square.size();i++)
    {
        square[i]=i*i;
        }
    square.back();
    return 0;

}