#include <stdlib.h>
#include <stdio.h>

/*
    malloc - memory allocation
    calloc - contiguos allocation
    free - free
*/

int main(int argc, char const *argv[])
{
    /* code */

    printf("size of int is %d", sizeof(int));

    int *ptr = (int *)malloc(8 * sizeof(int));

    if (ptr == NULL)
    {
        printf("malloc failed");
        exit(1);
    }
    else
    {
        printf("malala");
        int *orig = ptr;
        for (int i = 0; i < 8; i++)
        {
            *ptr = i + 100;
            ptr++;
        }

        // check that shit works

        //verify sizes
        printf("\nsize of ptr is %lu", sizeof(ptr));

        printf("reallocating");

        ptr = realloc(ptr, sizeof(16 * sizeof(int)));
        orig = ptr;

        for (int i = 0; i < 16; i++)
        {
            *ptr = i + 100;
            ptr++;
        }

        for (int i = 0; i < 16; i++)
        {
            printf("%d \t", *orig);
            orig++;
        }

        free(ptr);
    }
}