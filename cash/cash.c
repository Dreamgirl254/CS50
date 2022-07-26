#include <cs50.h>
#include <stdio.h>

#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents;
    do
    {
        cents = get_int("How many cents are you owed?");
    }
    while (cents < 1);

    int count = 0 ;
    while (cents > 0)
    {
        if (cents >= 25)  // Calculate the number of quarters to give the customer
        {
            count++;
            cents = cents - 25;
        }
        else if (cents >= 10)       // Calculate the number of dimes to give the customer
        {
            count++;
            cents = cents - 10;
        }
        else if (cents >= 5)       // Calculate the number of nickels to give the customer
        {
            count++;
            cents = cents - 5;
        }
        else   // Calculate the number of pennies to give the customer
        {
            count++;
            cents = cents - 1;
        }
    }



    // Print total number of coins to give the customer
    printf("\nTotal number of coins given:\n");
    printf("%i\n", count);
}



int get_cents(void)
{
    // Ask how many cents the customer is owed
    int cents;
    do
    {
        cents = get_int("How many cents are you owed?");
    }
    while (cents < 1);

    return cents;
}

// Calculate the number of quarters to give the customer
int calculate_quarters(int cents)
{
    int quarters = 0;
    while (cents >= 25)
    {
        quarters++;
        cents = cents - 25;
    }
    return quarters;
}

// Calculate the number of dimes to give the customer
int calculate_dimes(int cents)
{
    int dimes = 0;
    while (cents >= 10)
    {
        dimes++;
        cents = cents - 10;
    }
    return dimes;
}

// Calculate the number of nickels to give the customer
int calculate_nickels(int cents)
{
    int nickels = 0;
    while (cents >= 5)
    {
        nickels++;
        cents = cents - 5;
    }
    return nickels;
}

// Calculate the number of pennies to give the customer
int calculate_pennies(int cents)
{
    int pennies = 0;
    while (cents >= 1)
    {
        pennies++;
        cents = cents - 1;
    }
    return pennies;
}

