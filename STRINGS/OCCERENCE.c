#include <stdio.h>
int occerence(char *str,char c)
{
    int count =0;
    char *ptr = str;
    while(*ptr != '\0')
    {
        if(*ptr == c)
        {
            count++;
        }
            ptr++;
    }
    return count;
}
void main()
{
    char str[30],c;
    printf("ENTER THE STRING: ");
    gets(str);
    printf("ENTER THE CHARECTOR IN THE STRING: ");
    scanf("%c",&c);
    printf("THE %c CHARECTOR OCCERED %d TIMES..!!!\n",c,occerence(str,c));
}
