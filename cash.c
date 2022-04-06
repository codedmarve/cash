#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    //variables
    float a;
    int quarter = 25;
    int dime = 10;
    int nickle = 5;
    int penny = 1;
    int n = 0;

    //promt user for change owed
    do
    {
        a = get_float("change owed: ");
    }
    while(a < 0);

    //round change owed to the nearest penny
    int change = round(a * 100);

    //quater change count
    while(quarter <= change)
    {
        change = change - quarter; n++;
    }

    //dime change count
    while(dime <= change)
    {
        change = change - dime; n++;
    }

    //nickle change count
    while(nickle <= change)
    {
        change = change - nickle; n++;
    }

    //penny change count
    while(penny <= change)
    {
        change = change - penny; n++;
    }

    //Print number of change required
    printf("count is: %i\n", n);
}