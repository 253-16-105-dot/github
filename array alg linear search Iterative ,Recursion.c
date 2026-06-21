   #include<stdio.h>

     int itlinear (int numbers [],int s,int t)
   {
    for (int i=0; i<s; i++)
    {
        if (numbers[i]==t)
        {
            return i;

        }
    }
    return -1;
  }
  //Recursing linear search function
    int recurlinearsearch (int numbers[],int s,int t,int currentindex)
  {
    if (currentindex>=s)
    {
        return -1;
    }

    else if (numbers[currentindex]==t)
    {
        return currentindex;
    }
    return recurlinearsearch (numbers,s,t,currentindex + 1);
   }

   int main()
   {
    int s;
    printf("enter the size:\n");
    scanf("%d",&s);

    int numbers[s];
    printf("enter the %d elements:\n");
    for(int i=0; i<s; i++)
    {
        scanf("%d",&numbers[i]);
    }
    int t;
    printf("enter the search value:\n");
    scanf("%d",&t);

    //Iterative search
    int itresult=itlinear(numbers,s,t);
    if (itresult!=-1)
    {
      printf("iterative search ;element foun at index %d\n",itresult);
    }
    else
    {
        printf("iterative search is not found\n");
    }
    //Recursive search
    int recurresult=recurlinearsearch(numbers,s,t,0);
    if (recurresult!=-1)
    {

        printf("Recursive search ;element foun at index %d\n",recurresult);
    }
    else
    {
        printf("Recursive search is not found\n");
    }
      return 0;}
