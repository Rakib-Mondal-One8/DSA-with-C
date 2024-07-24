#include <stdio.h>
void display_a(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void deletion(int arr[], int index, int size)
{
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int arr[100] = {1, 4, 5, 7, 8};
    int size = 5;
    int index;
    scanf("%d", &index);
    deletion(arr, index, size);
    size -= 1;
    display_a(arr, size);
    return 0;
}