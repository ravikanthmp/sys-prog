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

    int *ptr = (int *)malloc(8 * sizeof(int));


    if (ptr == NULL)
    {
        printf("malloc failed");
        exit(1);
    }
    else
    {
        printf("halala");
        int* orig = ptr;
        for (int i = 0; i < 8; i++)
        {
            *ptr = i + 100;
            ptr++;
        }

        // check that shit works
        for(int i = 0; i < 8; i++) {
            printf("%d \at address \t", *orig);
            orig++;
        }

       free(ptr);
    }
}