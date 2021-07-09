//CHECK WITH THE PYTHON TUTOR

#include <stdio.h>
void reverse(int *array,int n)
{
    int temp,i;
    for(i=0;i<(n/2);i++)
    {
        temp=array[i];
        array[i]=array[n-i-1];
        array[n-i-1]=temp;
    }
}
void main()
{
    int n;
    int array[n];
    printf("ENTER THE SIZE OF THE ARRAY: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
    printf("ENTER THE ELEMENTS OF THE ARRAY: \n");
    scanf("%d",&array[i]);
    }
    reverse(&array,n);

    printf("THE VALUE OF THE ARRAY AFTER REVERSING: \n");
    for(int i=0;i<n;i++)
    {
    printf("THE VALUE OF THE ARRAY IS: %d\n",array[i]);
    }
}
