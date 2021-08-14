#include <stdio.h>
  
int main()
{
    char Str[1000],temp;
    int i,len=0;
   char r[1000];
    printf("Enter the String: ");
    scanf("%s", Str);
    char str[1000];
     printf("\na.Find Length of String S1\nb.Compare two strings S1 and S2 (Equal or not).\nc.Reverse a string S1 and display\n");
    int ch;
    scanf("%d", &ch);
     int begin, end, count = 0;
    switch (ch)
    {
    case 1:   for (i = 0; Str[i] != '\0'; ++i);
                 printf("Length of Str is %d", i);
        
                 break;
    case 2:   
                 printf("Enter the String 2 for comparison : ");
                 scanf("%s",str);     
                 int ans=0;      
                 for(int i=0;Str[i]!='\0';i++){
                     if(Str[i]!=str[i]){
                         ans=1;
                     }
                 }
                 if(ans==0){
                     printf("\nStrings are  equal"); 
                 }else {
                 printf("\nStrings are not  equal"); 
                 }
                
                
                
                 break;
    case 3 :     
                
                  

                    while (Str[count] != '\0')
                          count++;

                    end = count - 1;

                    for (begin = 0; begin < count; begin++) {
                      r[begin] = Str[end];
                       end--;
                           }

                     r[begin] = '\0';

                     printf("%s\n", r);
                      break;
                 
    default:
        break;
    }
    
  
    return 0;
}