//ASCII VALUES FOR LOWERCASE---->(97-122)
#include <stdio.h>
void main()
{
    char c;
    printf("ENTER THE CHARECTOR...\n");
    scanf("%c",&c);
    if(c<123 && c>96)
    {
        printf("ITS LOWERCASE..!!!");
    }
    else
    {
        printf("ITS NOT LOWERCASE..!!!");
    }
}
