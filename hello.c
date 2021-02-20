#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Get user to input their names
    string name = get_string("What is your name?\n");
    //Print user name after Hello
    printf("Hello, %s\n", name);
}