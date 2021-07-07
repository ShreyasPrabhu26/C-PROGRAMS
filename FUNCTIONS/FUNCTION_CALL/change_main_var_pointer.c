#include <stdio.h>
int tentimes(int *x);
void main()
{
    system("cls");
    int a,c;
    printf("ENTER THE NUMBER: %d\n");
    scanf("%d",&a);
    printf("THE VALUE OF A IS: %d\n",a);
    c = tentimes(&a);
    printf("THE VALUE OF A AFTER FUNCTION CALL IS: %d\n",c);
}
int tentimes(int *x)
{
    int result;
    result=((*x) * 10);
    return(result);
}
