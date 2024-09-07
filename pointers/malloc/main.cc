#include <iostream>

int main()
{
    int *iPtr;

    // allocate dynamic memeory for specify type and value
    iPtr = (int *)malloc(sizeof(int) * 25);

    printf("Pointer iPtr. address: %p, value: %d and size: %ld\n", iPtr, *iPtr, sizeof(iPtr));

    // applying values to iptr
    for (int i = 0; i < 25; ++i)
    {
        *(iPtr + i) = i; // *(iPtr+i) is equal iPtr[i]
    }

    // print out values
    for (int i = 0; i < 25; ++i)
    {
        printf("value of iPtr is: %d\n", *(iPtr + i));
    }

    return 0;
}