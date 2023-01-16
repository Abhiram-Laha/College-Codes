#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int n)
{
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n - j; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(&arr[i], &arr[i + 1]);
            }
        }
    }
}

int main()
{

    int list[8] = {8, 7, 6, 4, 5, 3, 1, 2};
    int n = 8;

    bubble_sort(list, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", list[i]);
    }

    return 0;
}