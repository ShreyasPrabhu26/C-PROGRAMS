#include <stdio.h>
struct employe
{
    int id;
    float salary;
    char name[15];
};
void main()
{
    struct employe company[100];

    //compay 0:
    
    company[0].id = 100;
    company[0].salary = 10000;
    strcpy(company[0].name,"SHREYAS");

    //compay 01:

    company[1].id = 100;
    company[1].salary = 10000;
    strcpy(company[1].name,"SANDESH");

    printf("THE COMPANY 1 DATA: \n");
    printf("%d\n",company[1].id);

}
