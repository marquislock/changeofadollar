//Marquis Lockhart - CSCI 1110-01
//Program 2 - Making Change of a Dollar

#include <stdio.h>
#include <stdlib.h>

#define SENTINEL -1

int main(void)
{
    double cost=0.0;
    int cents=0;
    int quarters=0;
    int dimes=0;
    int nickels=0;
    int pennies=0;
    printf("Marquis Lockhart - CSCI 1110-01-Program 2\n");
    printf("Making Change of a Dollar\n\n");

    while(1)
    {
        printf("Enter Amount Spent");
        scanf("%lg",&cost);
        if(SENTINEL==cost)break;
        if(cost>1.00){

            printf("invalid input\n");
            continue;
        }
//
        cents=cost*100+0.5;
        cents=100-cents;
        quarters=cents/25;
        cents=cents%25;
        dimes=cents/10;
        cents=cents%10;
        nickels=cents/5;
        cents=cents%5;
        pennies=cents/1;
        cents=cents%1;
        printf("      Cost      Quarters   Dimes    Nickels   Pennies\n");
        printf("%10.2f%10i%10i%10i%10i\n",cost,quarters,dimes,nickels,pennies);
    }
    return 0;
}
