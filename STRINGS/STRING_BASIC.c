//STRINGS ARE THE COLLECTION OF CHARECTORS 
//EACH CHARECTOR IS STORED IN THE FORM OF ARRAYS..!!!

//STRINGS ARE VISVALIZED IN THE BELOW PROGRAM...!!!
#include <stdio.h>
void main()
{
    //char str[] = {'S','H','R','E','Y','A','S','\0'}; //(\0) IS THE NULL CHARECTOR USED TO IDENTIFY THE LAST CHARECTOR OF THE STRING..!!!
    //-----------------------------------------------------///////////////
    char s[7] = "SHREYAS"; // IN THIS CASE NULL CHARECTOR IS AUTOMATICALLY ASSIGNED..!!!
    for(int i=0;i<7;i++)
    printf("%c",s[i]);
    printf("\n");
    //SHORTEST WAY TO PRINT A STRING USING %S 
    printf("%s",s);
}
