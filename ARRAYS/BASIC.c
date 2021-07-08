#include <stdio.h>
#include<stdlib.h>1

void main()
{
    system("cls");
    int marks[5];
    int i;
    for(i=0;i<5;i++)
    {
    printf("ENTER THE MARK %d : \n",i+1);
    scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
    printf("THE ENTERED MARK IS: %d \n",i+1);
    }
    
}
