#include <stdio.h>
int find_k_times(int *arr, int sz)
{
    int res = 0;
    for (int i = 0; i < 32; i++) // 遍历32位
    {
        int cnt = 0;
        int mask = 1 << i;
        for (int j = 0; j < sz; j++) // 遍历数组中所有元素的第i位
        {
            if ((mask & arr[j]) != 0)
            {
                cnt++;
            }
        }
        if ((cnt % 3) != 0) // 如果出现次数不为m,则目标数的次位为1
        {
            res = res | mask;
        }
    }
    return res;
}
int main()
{
    int arr[] = {1, 1, 1, 2, 2, 3, 3, 3, 4, 4, 4};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int res = find_k_times(arr, sz);
    printf("%d", res);
    return 0;
}