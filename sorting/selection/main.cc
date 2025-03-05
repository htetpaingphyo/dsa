#include <iostream>
#include <vector>

void selectionSort(std::vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[minIdx])
                minIdx = j;

        if (minIdx != i)
            std::swap(arr[i], arr[minIdx]);
    }
}

int main()
{
    int size;

    std::cout << "enter sequence size: ";
    std::cin >> size;
    std::vector<int> arr(size);

    std::cout << "enter sequence: ";
    for (int i = 0; i < size; i++)
        std::cin >> arr[i];

    std::cout << "bubble sorting: ";
    selectionSort(arr);

    for (int i : arr)
        printf("%d ", i);

    std::cout << std::endl;

    return 0;
}