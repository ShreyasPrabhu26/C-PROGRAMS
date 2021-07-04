#include <stdio.h>
#include <stdlib.h> // TO GENERATE RANDOM n
#include <time.h>

void main()
{
    system("cls");
    int n, guess, count;
    srand(time(0));
    n = rand() % 100; //GENERATES A RANDOM NUMBER BETWEEN 1 AND 100
    printf("THE NUMBER IS: %d\n", n);

    // USING FOR LOOP

    for (count = 1; guess == n || guess != n; count++)
    {
        printf("-------------------------\n");
        printf("GUESS THE NUMBER BETWEEN 1 AND 100\n");
        scanf("%d", &guess);
        if (guess == n)
        {
            printf("\nCONGRATS YOU GUESSED IT RIGHT WITHIN %d ATTEMPTS..!!!\n", count);
            printf("-----------THANK YOU--------------");
        }
        else if (guess > n)
        {
            printf("TRY LOWER NUMBER... :-)\n");
        }
        else if (guess < n)
        {
            printf("TRY HIGHER NUMBER... :-)\n");
        }
    }
}

//USING DO WHILE LOOP

//    do
//    {
//     printf("-------------------------\n");
//      printf("GUESS THE NUMBER BETWEEN 1 AND 100\n");
//      scanf("%d",&guess);
//      if(guess == n)
//      {
//          printf("\nCONGRATS YOU GUESSED IT RIGHT WITHIN %d ATTEMPTS..!!!\n",count);
//      }
//      else if(guess>n)
//      {
//          printf("TRY LOWER NUMBER... :-)\n");
//      }
//      else if(guess<n)
//      {
//          printf("TRY HIGHER NUMBER... :-)\n");
//      }
//      count++;
//    } while(guess!=n);
