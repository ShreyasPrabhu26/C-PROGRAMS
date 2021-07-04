#include <stdio.h>
void main()
{
    int n,i,prime=0;
    printf("ENTER THE NUMBER: ");
    scanf("%d",&n);
//USING FOR LOOP
    for(i=2;i<n;i++)
    {
        if(n%i == 0)
        {
        prime = 1;
        break;
        }
    }
        if(prime == 1)
    {
        printf("THE NUMBER %d IS NOT A PRIME NUMBER..!!!",n);
    }
    else{
        printf("THE NUMBER %d IS A PRIME NUMBER..!!!",n);
    }
}
//USING WHILE LOOP
    // while(i<n)
    // {
    //     if(n%i == 0)
    //     {
    //     prime = 1;
    //     break;
    //     }
    //     i++;
    // }
    // if(prime == 1)
    // {
    //     printf("THE NUMBER %d IS NOT A PRIME NUMBER..!!!",n);
    // }
    // else{
    //     printf("THE NUMBER %d IS A PRIME NUMBER..!!!",n);
    // }