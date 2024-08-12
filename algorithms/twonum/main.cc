#include <iostream>
#include <vector>

std::vector<int> twoNums(std::vector<int> arr, int num)
{
    std::vector<int> indices;

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] + arr[i] == num)
            {
                indices.push_back(j);
                indices.push_back(i);
                return indices;
            }
        }
    }
    return indices;
}

int main()
{
    std::vector<int> arr = {1, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29}, indices;
    int num = 24;
    indices = twoNums(arr, num);

    if (indices.empty())
        printf("no index found!");

    for (int i = 0; i < indices.size(); i++)
    {
        if (i > 0)
            printf(", ");

        printf("[%d]", indices[i]);
    }
    printf("\n");

    return 0;
}