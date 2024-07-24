#include <stdio.h>
int linear_search(int arr[], int size, int val)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == val)
            return i;
    }
    return -1;
}
int binary_search(int arr[], int size, int val)
{
    int l, r, mid;
    l = 0, r = size - 1;
    // Search until the low and high pointer converges;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (arr[mid] < val)
        {
            l = mid + 1;
        }
        else if (arr[mid] > val)
        {
            r = mid - 1;
        }
        else{

            return mid;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 3, 4, 5, 4928, 131, 12, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    int val;
    scanf("%d", &val);
    int index = linear_search(arr, size, val);
    printf("%d\n",index);
    index = binary_search(arr,size,val);
    printf("%d\n",index);
    return 0;
}