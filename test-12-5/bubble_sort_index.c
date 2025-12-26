#include <stdio.h>
void bubble_index(int *arr, int sz)
{
    for (int i = 0; i < sz - 1; i++)
    {
        int flag = 0;
        for (int j = 0; j < sz - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                flag = 1;
            }
        }
        if (flag == 0)
        {
            break;
        }
    }
}
int main()
{
    int arr[] = {2, 1, 0, 8, 4, 8, 9};
    int sz = sizeof(arr) / sizeof(arr[0]);
    bubble_index(arr, sz);
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}