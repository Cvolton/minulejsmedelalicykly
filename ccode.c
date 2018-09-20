//
// CCode
// Copyright (c) 1991 Jovan Lanik
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
 
int main()
{
    void **ptr = malloc(sizeof(void *)*12);
    ptr[0] = malloc(sizeof(int));
    ptr[1] = malloc(sizeof(int));
    ptr[2] = malloc(sizeof(int));
    ptr[3] = malloc(sizeof(int));
    ptr[4] = malloc(sizeof(int));
    ptr[5] = malloc(sizeof(int));
    ptr[6] = malloc(sizeof(int));
    ptr[7] = malloc(sizeof(int));
    ptr[8] = malloc(sizeof(int));
    ptr[9] = malloc(sizeof(int));
    ptr[10] = malloc(sizeof(int));
    ptr[11] = malloc(sizeof(int));
    *(int *)ptr[0] = 'H';
    *(int *)ptr[1] = 'E';
    *(int *)ptr[2] = 'L';
    *(int *)ptr[3] = 'L';
    *(int *)ptr[4] = 'O';
    *(int *)ptr[5] = ' ';
    *(int *)ptr[6] = 'W';
    *(int *)ptr[7] = 'O';
    *(int *)ptr[8] = 'R';
    *(int *)ptr[9] = 'L';
    *(int *)ptr[10] = 'D';
    *(int *)ptr[11] = '!';
    putchar(*(char *)ptr[0]);
    putchar(*(char *)ptr[1]);
    putchar(*(char *)ptr[2]);
    putchar(*(char *)ptr[3]);
    putchar(*(char *)ptr[4]);
    putchar(*(char *)ptr[5]);
    putchar(*(char *)ptr[6]);
    putchar(*(char *)ptr[7]);
    putchar(*(char *)ptr[8]);
    putchar(*(char *)ptr[9]);
    putchar(*(char *)ptr[10]);
    putchar(*(char *)ptr[11]);
    getchar();
    return 0;
}
