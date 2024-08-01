#include <iostream>

int main()
{
    int size;
    srand(time(NULL));

    std::cout << "enter size of array: ";
    std::cin >> size;

    int iArr[size];
    int *iPtr;

    iPtr = iArr; // assigning arry to pointer

    // inserting random value through pointer to array
    for (int i = 0; i < size; i++)
    {
        *(iPtr + i) = rand() % size;
    }

    // getting result of array
    for (int i = 0; i < size; i++)
    {
        printf("iArr[%d] is %d\n", i, iArr[i]);
    }

    return 0;
}