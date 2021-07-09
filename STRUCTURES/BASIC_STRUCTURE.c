#include <stdio.h>
#include<string.h>

struct database
{
    int id;
    float salary;
    char name[15];
};

void main()
{
  struct database d1;
  d1.id = 01;
  d1.salary = 10000;
  strcpy(d1.name,"SHREYAS");

  printf("%d\n\n",d1.id);
  printf("%f\n\n",d1.salary);
  printf("%s\n\n",d1.name);
}
