#include <stdio.h>

void main()
{
    int i;
    int array[3][3];
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        {
         printf("ENTER THE VALUES OF ARRAY: \n");
         scanf("%d",&array[i][j]);
        }
    
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
        {
         printf("THE VALUES OF ARRAY:%d\n",array[i][j]);
        }
    
}
