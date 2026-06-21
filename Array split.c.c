#include<stdio.h>
int main()
{

    int n1,n2;
//fast array
    printf("enter the number n1:");
    scanf("%d",&n1);
    int arr1[n1];
    for (int i=0; i<n1; i++)
    {
        printf("inter the fast arr1=%d:",i);
        scanf("%d",&arr1[i]);
    }

    //2nd
    printf("enter the 2nd number n2:");
    scanf("%d",&n2);
    int arr2[n2];
    for (int i=0; i<n2; i++)
    {
        printf("inter the fast arr1=%d:",i);
        scanf("%d",&arr2[i]);
    }
    int marged [n1+n2];
    for (int i=0; i<n1; i++){
        marged[i]=arr1[i];}
    for (int i=0; i<n2; i++){
        marged[n1+i]=arr2[i];}

    printf("marged array");
    for (int i=0; i<n1+n2; i++)
       {

       printf("%d",marged[i]);}

    return 0;

}
