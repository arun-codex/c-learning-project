#include <stdio.h>

int main()
{

    for (int i = 0; i <= 15; i++)
    {
        if (i == 5)
        {
            // break; // it breaks out of the loop entirely
            continue; // it skips the rest of the loop body for this iteration only
        }
        printf("i is %d\n", i);
    }
    printf("Loop ended\n");

    return 0;
}