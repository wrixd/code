#include <stdio.h>
using namespace std;

int main() {
    int n;
    
    printf("\nEnter a number : ");
    scanf("%d",&n);
    if(n%5==0){
        printf("\nNumber %d is divisible by 5",n);
    }
   else{
        printf("\nNumber %d is not divisible by 5",n);

   }

    return 0;
}