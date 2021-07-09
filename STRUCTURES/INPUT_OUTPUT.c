#include <stdio.h>
struct employe
{
    int id;
    float salary;
    char name[15];
};
void main()
{
    struct employe e1,e2,e3;

  printf("ENTER THE E1 ID:");  
  scanf("%d",&e1.id);
  printf("ENTER THE E1 SALARAY");
  scanf("%f",&e1.salary);
  printf("ENTER THE NAME: ");
  scanf("%s",e1.name);

  printf("ENTER THE E2 ID:");  
  scanf("%d",&e2.id);
  printf("ENTER THE E2 SALARAY");
  scanf("%f",&e2.salary);
  printf("ENTER THE NAME: ");
  scanf("%s",e2.name);

  printf("ENTER THE E3 ID:");  
  scanf("%d",&e3.id);
  printf("ENTER THE E1 SALARAY");
  scanf("%f",&e3.salary);
  printf("ENTER THE NAME: ");
  scanf("%s",e3.name);
}
