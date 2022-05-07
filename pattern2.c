#include <stdio.h>

int main()
{
    int rows, col;
    scanf("%d%d",&rows,&col);
    
    for(int i = 1; i<=rows; i++){
        for(int j=1; j<=col; j++){
    
           if(i == 1 || j == 1 || i == rows || j == col)
             {
                 printf("*");
             }
    
           else{
                  printf(" ");
               }
        }
         printf("\n");
    }
    return 0;
}
