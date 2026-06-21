#include <stdio.h>

int main()
{
    int size;
    printf("Array size: ");
    scanf("%d", &size);

    int arr[size + 1];


    for(int i = 0; i < size; i++)
    {
        printf("Value %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int n, val;

    printf("Insert position: ");
    scanf("%d", &n);

    printf("Insert value: ");
    scanf("%d", &val);

    if(n < 0 || n > size)
    {
        printf("Invalid position!\n");
    }
    else
    {


        for(int i = size; i >= n + 1; i--)
        {
            arr[i] = arr[i - 1];
        }

        arr[n] = val;
        size++;

        printf("Updated array:\n");
        for(int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
