#include <stdio.h>

int main()
{
    int n, m, i;
    int x = 0, y = 0;

    printf("List 01 capacity: ");
    scanf("%d", &n);

    printf("List 02 capacity: ");
    scanf("%d", &m);

    int a[n], b[m], X[n], Y[n], L2[n + m];

    printf("Enter list 01: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter list 02: ");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &b[i]);
    }


    for (i = 0; i < n; i++)
    {
        if (a[i] > 25 || a[i] % 4 == 0)
        {
            X[x++] = a[i];
        }
        else
        {
            Y[y++] = a[i];
        }
    }

    int j = 0;


    for (i = 0; i < x; i++)
    {
        L2[j++] = X[i];
    }


    for (i = 0; i < m; i++)
    {
        int k;
        for (k = 0; k < j; k++)
        {
            if (b[i] == L2[k])
            {
                break;
            }
        }

        if (k == j)
        {
            L2[j++] = b[i];
        }
    }

    printf("Final: ");
    for (i = 0; i < j; i++)
    {
        printf("%d ", L2[i]);
    }

    printf("\n");

    return 0;
}
