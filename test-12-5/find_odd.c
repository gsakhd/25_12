#include <stdio.h>
int Find_odd(int *arr, int sz)
{
    int x = 0;
    for (int i = 0; i < sz; i++)
    {
        x ^= arr[i];
    }
    return x;
}
int main()
{
    int arr[] = {1, 1, 2, 2, 3, 4, 4};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int find = Find_odd(arr, sz);
    printf("%d", find);
    return 0;
}