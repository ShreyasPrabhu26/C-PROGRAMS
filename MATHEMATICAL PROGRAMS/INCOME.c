#include <stdio.h>

void main()
{
    int income,tax;
    printf("ENTER THE INCOME: \n");
    scanf("%d",&income);
    if(income<250000)
    {
        tax=0;
        printf("NO NEED TO PAY TAX FOR %d income..!!!\n",income);
    }
    else if(income>250000 && income<=500000)
    {
        //5% tax
        tax=(income*5)/100;
        printf("THE TAX IS %d\n",tax);
    }
    else if(income>500000 && income<=1000000)
    {
        //20% tax
        tax=(income*20)/100;
        printf("THE TAX IS %d\n",tax);
    }
    else if(income>1000000)
    {
        //30% tax
        tax=(income*30)/100;
        printf("THE TAX IS %d\n",tax);
    }
    printf("---THANK YOU---\n");

}
