#include<stdio.h>

void main()
{
    float si,principle,time,rate;
    printf("ENTER THE PRINCIPLE AMOUNT: ");
    scanf("%f",&principle);
    printf("ENTER THE TIME PERIOD: ");
    scanf("%f",&time);
    printf("ENTER THE RATE: ");
    scanf("%f",&rate);
    si = (principle*time*rate)/100;
    printf("THE SIMPLE INTREST IS: %.f \n",si);
    printf("---THANK YOU---\n");
}