// <--------SHREYAS CLOCK-------->
#include <stdio.h>
#include<stdlib.h>
#include<windows.h>

void main()
{
    system("cls");
    int h,m,s,d=1000;
    printf("ENTER THE HOUR MINIUTE SECOUND: ");
    scanf("%d %d %d",&h,&m,&s);
        if(h>=12||m>=60||s>=60)
        {
            printf("WRONG INPUT..!!!\n");
            exit(0);
        }
    while(1)
    {
        s++;
        if(s>=60)
        {
            m++;
            s=0;
        }
        if(m>=60)
        {
            h++;
            m=0;
        }
        printf("<--------SHREYAS CLOCK-------->\n");
        printf("\n     %02d : %02d : %02d \n",h,m,s);
        Sleep(d);
        system("cls");
    }
}
