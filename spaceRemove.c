#include<stdio.h>
#include<string.h>

int main()
{
    
    char a[1000], m[1000];
    int i = 0, j = 0, len;

    printf("\n\nEnter the string: ");
    gets(a);

    len = strlen(a);   

    while(a[i] != '\0')   
    {
        if(a[i] != ' ')
        {
            
            m[j++] = a[i];
        }
       
        i++;
    }
    m[j] = '\0';
    printf("\n\nThe string after removing all  spaces is: %s", m);
    return 0;
}