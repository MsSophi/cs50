#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("Test?\n");
    printf("Test is %s\n", name);
}