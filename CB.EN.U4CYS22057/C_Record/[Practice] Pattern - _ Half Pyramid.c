#include<stdio.h>

void main()
{
    int rows;
    scanf("%d",&rows);
    if (rows > 0 && rows <25){
        for(int a=1;a<=rows;a++)
        {
            for(int b=0;b<a;b++)
            {
                printf("*  ");
        }
        printf("\n");
        }
    }
    else {
        printf("Invalid Input");
    }
}
