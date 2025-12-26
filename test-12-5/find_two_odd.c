#include <stdio.h>
void find_two_odd(int *arr, int *a, int *b, int sz)
{
    int tmp = 0;
    for (int i = 0; i < sz; i++)
    {
        tmp ^= arr[i]; // 存储的是a和b的值
    }
    // 怎么把a和b分开呢tmp!=0,则必有一位是1-->最右边的方便取
    // 用&全1才为1
    int rightOne = tmp & (-tmp);
    *a = 0;
    *b = 0;
    for (int i = 0; i < sz; i++)
    {
        if ((rightOne & arr[i]) == 0) // 相应位为0
                                      // 注意优先级&的低于==，所以最好的解决方法是加括号
            *a ^= arr[i];
        else if ((rightOne & arr[i]) == 1) // 相应位为1
            *b ^= arr[i];
    }
}
int main()
{
    int arr[] = {1, 2, 2, 3, 3, 4, 5, 5};
    int a = 0, b = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    find_two_odd(arr, &a, &b, sz);
    printf("%d %d", a, b);
    return 0;
}