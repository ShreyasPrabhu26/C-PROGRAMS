#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void encrption(char *array,int key);
void decrption(char *array,int key);
void main()
{
    char pass[50];
    int key=1;
    printf("\nENTER THE PASSWORD:-");
    gets(pass);
    encrption(pass,key);
    printf("\nSUCESSFULY ENCRPTED YOUR DATA...\n");
    printf("\nENCRPTED DATA IS:%s\n",pass);
    printf("!!!----------------------------!!!\n\n");
    for(int limit=3;limit>=0;limit--)
        {
         printf("ENTER THE ENCRPTION KEY: ");
         scanf("%d",&key);
        if(key == 1)
        {
            decrption(pass,key);
            printf("THE PASSWORD IS: %s",pass);
            exit(0);
        }
        else
        {
         printf("WRONG KEY..!!!\n\n");
         printf("YOU HAVE %d ATTEMPTS LEFT..!!!\n",limit);
        }
        }
        printf("YOU HAVE EXIDED THE LIMITS...!!!");
}
void encrption(char *array,int key)
{
    char *ptr;
    ptr = array;
    while(*ptr!='\0')//TILL WE REACH THE LAST CHARECTOR OF THE STRING..!!!
    {
        *ptr = *ptr + key; //ENCRPTION KEY 
        ptr++;
    }
}
void decrption(char *array,int key)
{
    char *ptr;
    ptr = array;
    while(*ptr!='\0')//TILL WE REACH THE LAST CHARECTOR OF THE STRING..!!!
    {
        *ptr = *ptr - key; //ENCRPTION KEY 
        ptr++;
    }
}