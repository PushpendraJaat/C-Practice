#include <stdio.h>

int main()
{
    int marks;
    scanf("%d",&marks);
    
    switch(marks){
        case 90 ... 100:{
            printf("A");
            break;
        }
        case 80 ... 89:{
            printf("B");
            break;
        }
        case 70 ... 79:{
            printf("C");
            break;
        }
        case 60 ... 69:{
            printf("D");
            break;
        }
        case 40 ... 59:{
            printf("Pass");
            break;
        }
        case 0 ... 39:{
            printf("Fail");
            break;
        }
        default:{
            printf("Invalid");
            break;
        }
    }

    return 0;
}
