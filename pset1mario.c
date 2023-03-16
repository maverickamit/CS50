#include <stdio.h>

int draw_pyramid(int x);

int main(void)
{
    int x;
    printf("Enter the height of pyramid: ");
    scanf("%i", &x);

    // Keep asking the user for a positive integer value
    while (x <= 0)
    {
        printf("Please enter a positive number: ");
        scanf("%i", &x);
    }
    draw_pyramid(x);
}

int draw_pyramid(int x)
{
    for (int level = 1; level <= x; level++)
    {
        for (int i = 0; i < x - level; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < level; i++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}