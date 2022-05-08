//#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    // get cents owed
    int a = 0;
    while (a <= 0)
    {
        printf("Change Owed:");
        scanf("%d", &a);
    }
    return a;
}

int calculate_quarters(int cents)
{
    // Calculating quarters
    int temp = 0;
    int number = 0;
    for (temp = cents; temp >= 25; temp = temp - 25)
    {

        number++;
        
    }
    return number;
}

int calculate_dimes(int cents)
{
    // TODO
    int temp = 0;
    int number = 0;
    for (temp = cents; temp >= 10; temp = temp - 10)
    {
        number++;
    }
    return number;
}

int calculate_nickels(int cents)
{
    // TODO
    int temp = 0;
    int number = 0;
    for (temp = cents; temp >= 5; temp = temp - 5)
    {
        number++;
    }
    return number;

}

int calculate_pennies(int cents)
{
    // TODO
    int temp = 0;
    int number = 0;
    for (temp = cents; temp >= 1; temp = temp - 1)
    {
        number++;
    }
    return number;
}
