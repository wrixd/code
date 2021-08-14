
#include<stdio.h>
using namespace std;

  int fact(int x){
    if(x==0){
        return 1;
    }
    else {
        return x*fact(x-1);
    }
}


int main(){
    int x;
    printf("\nEnter a number to calculate factorial : ");
    scanf("%d",&x);
    printf("\nfactorial \t: %d",fact(x));
    return 0;
}