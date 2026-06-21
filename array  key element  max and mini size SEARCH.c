   #include<stdio.h>
   int main()
   {
    int n;
    printf("enter the size:\n");
    scanf("%d",&n);

    int arr[n];
    printf("enter the %d element :\n",n);
    for(int i=0; i<n; i++)
    {

        scanf("%d",&arr[i]);
    }



    int max=arr[0];
    int min=arr[0];

    for (int i=1; i<n; i++)
    {


        if(arr[i]>max)
        {
            max=arr[i];
        }

        else if (arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("the maxsimam number is :%d\n",max);
    printf("the minimam number is :%d\n",min);

    return 0;
    }









