#include <cs50.h>
#include <stdio.h>
int main(void)
{
    // range within which user can enter the height
    int n;
    do
    {
        n = get_int("What height do you want? ");
    }
    while (n < 1 || n > 8);

    // for the inner and outer loops

    for (int i = 1; i <= n; i++) //outer loop
    {
        for (int j = 0; j <= n - (i + 1); j++)
        {
            printf(" "); //creates the space for the right alignment
        }
        for (int z = 0; z <= i - 1; z++)
        {
            printf("#");
        }
        printf("\n");
    }

}

