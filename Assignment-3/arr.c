#include <stdio.h>
int main()
{
    int i, n, num, pos, arr[10];
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to be inserted : ");
    scanf("%d", &num);
    printf("Enter the position at which the number has to be added :");
    scanf("%d", &pos);
    for (i = n - 1; i >= pos; i--)
        arr[i + 1] = arr[i];
    arr[pos] = num;
    n = n + 1;
    printf("The array after insertion of %d is : \n", num);
    for (i = 0; i < n; i++)
        printf("arr[%d] = %d\n", i, arr[i]);
    return 0;
}