
// 3-MONTH OUTPUT..!!
// SOFT-COPY..!!

#include <stdio.h>
#include<string.h>
void main()
{
    //DECLARATION:

    char name[15];
    int RR,month,year;
    float PR,CR,unitsconsumed,fixedcharge,energycharge,subsidy,arrears,advance,total;
    const float perunitcharge = 4.641;
    printf("\n--------MESCOM--------\n\n");
    printf("----ELECTRICITY BILL----\n\n");
    
    //DATA INPUTS

    printf("ENTER THE NAME: ");
    gets(name);
    printf("ENTER THE RR NUMBER: ");
    scanf("%d",&RR);
    printf("ENTER THE MONTH AND YEAR: ");
    scanf("%d %d",&month,&year);
    printf("ENTER THE FIXED CHARGES: ");
    scanf("%f",&fixedcharge);
    printf("ENTER THE PREVIOUS READINGS: ");
    scanf("%f",&PR);
    printf("ENTER THE CURRENT READINGS: ");
    scanf("%f",&CR);
    printf("ENTER THE ARREARS: ");
    scanf("%f",&arrears);
    printf("ENTER THE SUBSIDY:");
    scanf("%f",&subsidy);
    printf("ENTER THE ADVANCE AMOUNT: ");
    scanf("%f",&advance);

    //CALCULATIONS:

    unitsconsumed = (CR-PR);
    energycharge = ((unitsconsumed)*perunitcharge);
    total = ((energycharge) + (fixedcharge) + (arrears) - (subsidy) - (advance));

    //DATA OUTPUTS:

    printf("\n-----------------------\n");
    printf("NAME OF CUSTOMER: %s\n",name);
    printf("ACOUNT NUMBER: %d\n",RR);
    printf("UNITS CONSUMED: %.2f\n",(CR-PR));
    printf("PREVIOUS READINGS: %.2f\n",PR);
    printf("CURRENT READINGS: %.2f\n",PR);
    printf("TOTAL UNITS CONSUMED: %.2f\n",unitsconsumed);
    printf("FIXED CHARGES: %.2f\n",fixedcharge);
    printf("ENERGY CHARGES: %.2f\n",energycharge);
    printf("ARREASRS:%.2f \n",arrears);
    printf("SUBSIDY: %.2f\n",subsidy);
    printf("ADVANCE: %.2f\n",advance);
    printf("------------------------\n");
    printf("TOTAL BILL AMOUNT: %.2f\n",total);
    printf("-------------------------\n");
}
