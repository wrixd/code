#include<stdio.h>
void add(int a1[][100],int a2[][100],int r,int col){
    int c[r][col];
                    for(int i=0;i<r;i++){
		             for(int j=0;j<col;j++)
			         c[i][j]=a1[i][j]+a2[i][j];
                        }
                     printf("After addition 2D Array is :\n");
                       for(int i=0;i<r;i++)
                         {
                      for(int j=0;j<col;j++)
                          {
                       printf("%d\t",c[i][j]);
                       }
                    printf("\n");
                         }
    
                    }
void sub(int a1[][100],int a2[][100],int r,int col){
    int c[r][col],i,j;
                    for(i=0;i<r;i++){
		             for(j=0;j<col;j++)
			         c[i][j]=a1[i][j]-a2[i][j];
                        }
                     printf("After addition 2D Array is :\n");
                       for(int i=0;i<r;i++)
                         {
                      for(int j=0;j<col;j++)
                          {
                       printf("%d\t",c[i][j]);
                       }
                    printf("\n");
                         }
    
                    }
void tran(int a1[][100],int r,int col){
    int b[r][col];
    for (int i = 0; i < r; ++i)
                 for (int j = 0; j < col; ++j) {
                   b[j][i] = a1[i][j];
                  }
                  printf("After Transpose A  Array is :\n");
                       for(int i=0;i<r;i++)
                         {
                      for(int j=0;j<col;j++)
                          {
                       printf("%d\t",b[i][j]);
                       }
                    printf("\n");
                         }
                         
}



int main()
{
  int m, n;
  printf("Enter number of row and column: ");
  scanf("%d %d",&m,&n);
  int a[m][n],b[m][n],c[m][n], i, j;
 for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("Enter a[%d][%d]: ",i,j);
      scanf("%d", &a[i][j]);
    }
    printf("\n");
  }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("Enter b[%d][%d]: ",i,j);
      scanf("%d", &b[i][j]);
    }
    printf("\n");
  }
   printf("\na.ADD\nb.Sub\nc.Transpose\n");
  int ch;
  printf("\nEnter an option"); 
  scanf("%d", &ch);
   switch(ch)
   {
   case 1:        add(a[m][n],b[m][n],m,n); break;
    case 2 : sub(a[m][n],b[m][n],m,n); break;
	case 3 :  tran(a[m][n],m,n); break;
	
    
   
     default:
            break;
   }
   return 0;
   }

