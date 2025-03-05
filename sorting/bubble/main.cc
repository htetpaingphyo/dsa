#include <iostream>
#include <vector>

void bubbleSort(std::vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1; j++)
            if (arr[j] > arr[j + 1])
                std::swap(arr[j], arr[j + 1]);
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
    bubbleSort(arr);

    for (int i : arr)
        printf("%d ", i);

    std::cout << std::endl;

    return 0;
}