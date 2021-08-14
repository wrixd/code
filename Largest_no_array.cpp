#include<iostream>
#include<algorithm>
#include<conio.h>
using namespace std;

int main(){
    cout<<"\nEnter a size of array : ";
    int a;
    cin>>a;
    int arr[a],i=0;
    while(i<a){
        cout<<"\nEnter the "<<i<<"th element of the array : ";
    
        cin>>arr[i];
        i++;
    }
    sort(arr,arr+a);
    cout<<"\nThe largest element of the array is : "<<arr[a-1];
    getch();
    return 0;

}