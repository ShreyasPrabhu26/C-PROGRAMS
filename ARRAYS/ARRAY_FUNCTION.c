#include <stdio.h>
void printarray(int *ptr, int n);//HERE N IS THE SIZE OF THE ARRAY..!!!
void main()
{
    int array[3];
    for(int i=0;i<3;i++)
    {
    printf("ENTER THE VALUE %d : \n",i+1);
    scanf("%d",&array[i]);
    }
    printarray(array,3);

}
void printarray(int *ptr, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("THE VALUE OF THE %d th ELEMENT IS: %d\n",i+1,*(ptr+i));
    }
}
