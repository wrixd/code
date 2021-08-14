#include <stdio.h>
int main()
{
    char ch;

    
    printf("\nEnter any character: ");
    
    scanf("%c",&ch);

    if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
       { printf("\nThe entered character %c is an Alphabet",ch);
           switch (ch)
            {
            case 'a': printf("\nIt is a vowel"); break;
            case 'e': printf("\nIt is a vowel"); break;
            case 'i': printf("\nIt is a vowel"); break;
            case 'o': printf("\nIt is a vowel");  break;
            case 'u': printf("\nIt is a vowel");  break;
            
            default: printf("\nIt is not a vowel");
               break;
           }

         
       }

    else
        printf("\nThe entered character %c is not an Alphabet",ch);

    return 0;
}