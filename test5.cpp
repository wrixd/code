#include <iostream>
#include <cstring>
#include<string>
using namespace std;
int main() {
char str[20];
    int i = 0, chk = 0, countWord= 0;
 cin.getline(str,20);
    while(str[i] != '\0'){
        if(str[i] == ' '){
            if(chk != 0)
                countWord++;
                chk = 0;

        }
        else{
            chk++;
        }
        i++;
    }
    if(chk != 0)
        countWord++;

    cout<<countWord<<endl;
    return 0;
}