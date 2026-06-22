#include<stdio.h>
int main()
{
    int n ;
    printf("Enter you element number :");
    scanf("%d",&n);
    int arr[n];
    printf("enter you element%d:\n",n);
    for( int i=0; i<n; i++)
    {
        printf("enter the %d element\n",i+1);
        scanf("%d",&arr[i]);
    }
    //intsertion sort
    for (int i=1; i<n; i++)
    {
        int key =arr[i];
        int j=j-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
       }
        arr[j+1]=key;
    }
    printf("\n sorted array:\n");
    for (int i=0; i<n; i++)
    {
        printf("%d",arr[i]);

    }
    return 0;
}
