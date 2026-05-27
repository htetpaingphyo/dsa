#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// here we use pointer arithmetic to access the elements of an array
// unlike the "array", "pointer" is stored in the heap memory so we
// have to use "malloc" to allocate memory for the pointer.

int main()
{
    int array[SIZE];
    int *arr = array;

    // *(arr + i) is equivalent to arr[i]
    for (int i = 0; i < SIZE; i++)
        *(arr + i) = (i + 1) * 10;

    // alternatively, we can use arr++ to move the next address of the array
    // but, be careful when using arr++, because it will change the address of the pointer,
    // and it will point to the last element of the array after looping
    while (arr < array + SIZE)
        printf("%d%c", *arr++, (arr == (array + SIZE) - 1) ? '\n' : ' ');

    return 0;
}