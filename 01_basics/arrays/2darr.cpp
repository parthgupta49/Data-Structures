#include <iostream>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // int **arr;

    // arr = (int **)malloc(sizeof(int) * 3);

    int *arr[3];

    for(int i = 0;i < 3;i++)
    {
        arr[i] = (int *)malloc(sizeof(int) * 4);
    }

    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < 4;j++)
        {
            std::cout << arr[i][j] << " ";
        }
        
        std::cout << "\n";

    }

    return 0;
}
