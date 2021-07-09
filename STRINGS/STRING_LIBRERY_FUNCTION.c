#include <stdio.h>
#include<string.h> //HEADER FILE FOR USING STRING FUNCTIONS..!!!
void main()
{
    // X -- STRLEN()
    // Y -- STRCAT()
    // Z -- STRCMP()

    // goto Z; //ENTER WHICH LABEL TO GO....!!!

    // X:
    // int n;
    // char s[30];
    // char copy[30];
    // printf("ENTER THE STRING:-");
    // gets(s);
    // printf("THE ENTERED STRING IS:");
    // puts(s);
    // n = strlen(s);  //strlen() IS USED TO GET THE LENGHT OF THE STRING..!!!
    // printf("THE LENGHT OF THE STRING IS: %d\n",n);
    // strcpy(copy,s); //strcpy(target,source) IS USED TO COPY THE VALUE OF ANOTHER STRING..!!!
    // printf("THE VALUE OF COPY IS: %s\n",copy);

    // Y:    
    // printf("-----------------------------------------\n");

    // char s1[30];
    // char s2[30];
    // printf("ENTER THE STRING1:-");
    // gets(s1);
    // printf("ENTER THE STRING2:-");
    // gets(s2);
    // strcat(s1,s2);//strcat(STRING1,STRING2) IS USED TO CONCATINATE TWO STRINGS..!!!
    // printf("FINAL STRING IS: %s\n",s1);

    // Z:
    printf("-----------------------------------------\n");
    char s1[30];
    char s2[30];
    int diff;
    printf("ENTER THE STRING1:-");
    gets(s1);
    printf("ENTER THE STRING2:-");
    gets(s2);
    diff = strcmp(s1,s2); //strcmp() IS USED TO COMPARE THE VALUES OF TWO STRINGS....
                            //BY REFERING THE ASCII VALUES IT RETURNS THE VALUE...
                            //IF BOTH THE STRINGS ARE EQUAL IT RETURNS:-0
                            //IF FIRST STRING CHARECTOR IS GREATER THAN SECOUND IT RETURNS:-1  {LARGE-SMALL}{IN TERMS OF ASCII VALUES}
                            //IF SECOUND STRING CHARECTOR IS GREATER THAN FIRST IT RETURNS:-0  {SMALL-LARGE}{IN TERMS OF ASCII VALUES}
    printf("THE DIFFERENCE IS: %d",diff);
}
