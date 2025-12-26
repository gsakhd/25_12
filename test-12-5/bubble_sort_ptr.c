#include <stdio.h>
void bublle(int *arr, int sz)
{
    int *p1;
    int *p2;
    for (int i = 0; i < sz - 1; i++)
    {
        p1 = arr; // 注意要重置指针
        int flag = 0;
        for (int j = 0; j < sz - 1 - i; j++)
        {
            p2 = p1 + 1;
            if (*p1 > *p2)
            {
                int tmp = *p1;
                *p1 = *p2;
                *p2 = tmp;
                flag = 1;
            }
            p1++;
        }
        if (flag == 0)
        {
            break;
        }
    }
}
int main()
{
    printf("冒泡排序\n");
    int arr[] = {4, 6, 1, 9, 0, 3};
    int sz = sizeof(arr) / sizeof(arr[0]);
    bublle(arr, sz);
    // printf("%s",arr);只有字符串才用%s输出，这里是int arr[]
    for (int i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}