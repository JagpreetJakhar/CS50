//#include <cs50.h>
#include <stdio.h>
#include<string.h>

int main(void)
{
    int height = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int m = 0;

    while (height < 1 || height > 8)
    {
        printf("Height: ");
        scanf("%d", &height);
    }
    m = height;
    //iterating for a number of times
    while (m >= 1)
    {

        j = height - m; //initializng hashes for first-half

        k = height - m; //initailizing hashes for second half

        for (i = m - 1; i > 0; i--) //Making spaces for first half
        {
            printf(" ");
        }
        while (j > 0) //hashes for first half
        {
            printf("#");
            j--;
        }

        printf("#  #"); //remains same for every line of output

        while (k > 0) //second half hashes
        {
            printf("#");
            k--;
        }

        printf("\n");

        m--;
    }
}
