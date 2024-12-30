/*#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j >= 5 - i && j<=3 + i)
            {
                printf(" ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;
    int random_number;
    srand(time(0)); // Seed the random number generator with current time

    for(i = 0; i < 10; i++) { // Generate 10 random numbers
        random_number = rand() % 81 + 20; // Generate a random number between 20 and 100
        // printf("%d\n", random_number);
    }
    char str1[20];
    char str2[20];

    printf("enter your name : ");
    fgets(str1,20,stdin);

    printf("enter your another name (G) : ");
    fgets(str2,20,stdin);

    printf("The love percentage between %s and %s is %d",str1,str2,random_number);
    return 0;
}
