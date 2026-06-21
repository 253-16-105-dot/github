   #include<stdio.h>
   int main()
  {
    int key,size;



    printf("enter the array size:");
    scanf("%d",&size);

    int arr[size];

    printf(" enter the  number=\n");
        for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }



    printf("enter your key :");
    scanf("%d",&key);


    int count=0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==key)
        {
            printf("found the index %d\n",i);
            count++;
        }
    }
    printf("Total occurrences:%d\n",count);

    return 0;
   }
