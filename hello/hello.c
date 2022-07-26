#include <stdio.h>
#include <cs50.h>
int main(void)
{
    //Ask the user for their name
    string name = get_string("What's your name?");
    // Output of their name will be shown
    printf("hello, %s\n", name);
}