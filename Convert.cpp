#include <stdio.h> 
#include<ctype.h> 
using namespace std;


int main()  
{  
    int i, len = 0;  
    char str[] = "Great Power 103";  
      

    len = sizeof(str)/sizeof(str[0]);  
      

    for(i = 0; i < len; i++){  
          

        if(isupper(str[i])){  
             
            str[i] = tolower(str[i]);  
        }  
     
        else if(islower(str[i])){  
           
            str[i] = toupper(str[i]);  
        } 
        else if(isdigit(str[i]))
        {    if(str[i]!=0)
            str[i]='0';
        } 
    }  
    printf("String after case conversion : %s", str);  
    return 0;  
}