#include<cs50.h>
#include<stdio.h>
#include<math.h>

int main(void)
{
    int quarter = 25, dimes = 10, nickel = 5, pennies = 1;
    float dollars;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0.00);
    //use to convert dollar to cents
    int cents = round(dollars * 100);
    // pass the value
    int coins = cents;
    // use to tack how many coins did the loop use
    int count = 0;
    while (coins > 0)
    {
        // use highest counter as possible
        while (coins >= quarter)
        {
            count ++;
            coins -= quarter;
        }
        while (coins >= dimes)
        {
            count ++;
            coins -= dimes;
        }
        while (coins >= nickel)
        {
            count ++;
            coins -= nickel;
        }
        while (coins >= pennies)
        {
            count ++;
            coins -= pennies;
        }
        // total coins
        printf("Total: %i\n", count);
    }
    
}
