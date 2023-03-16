#include <stdio.h>
int calculate_no_coins(int x);
int calculate_quarters(int x);
int calculate_dimes(int x);
int calculate_nickels(int x);
int calculate_pennies(int x);

int main(void)
{
    int change;
    do
    {
        printf("Change owed: ");
        scanf("%i", &change);
    } while (change <= 0);

    printf("Number of coins: %i", calculate_no_coins(change));
}

int calculate_no_coins(int x)
{
    // initial number of coins is zero
    int coins = 0;
    int quarters = calculate_quarters(x);
    coins += quarters;
    // value of x is updated
    x = (x - (25 * quarters));

    int dimes = calculate_dimes(x);
    coins += dimes;
    // value of x is updated
    x = (x - (10 * dimes));

    int nickels = calculate_nickels(x);
    coins += nickels;
    // value of x is updated
    x = (x - (5 * nickels));

    int pennies = calculate_pennies(x);
    coins += pennies;
    // value of x is updated
    x = (x - (1 * pennies));

    if (x == 0)
    {
        return coins;
    }

    return 0;
}

int calculate_quarters(int x)
{
    if (x < 0)
    {
        return 0;
    }
    int ans = x / 25;
    return ans;
}
int calculate_dimes(int x)
{
    if (x < 0)
    {
        return 0;
    }
    int ans = x / 10;
    return ans;
}
int calculate_nickels(int x)
{
    if (x < 0)
    {
        return 0;
    }
    int ans = x / 5;
    return ans;
}
int calculate_pennies(int x)
{
    if (x < 0)
    {
        return 0;
    }
    int ans = x / 1;
    return ans;
}