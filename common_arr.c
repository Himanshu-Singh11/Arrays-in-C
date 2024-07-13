#include<stdio.h>
int main()
{
    int arr1[5],arr2[5],i,j;
    for(i=0;i<=4;i++)
    {
    printf("enter a number");
    scanf("%d",&arr1[i]);
    }
    for(j=0;j<=4;j++)
    {
        printf("enter a number");
        scanf("%d",&arr2[j]);
    }
    for(i=0;i<=4;i++)
    printf("\t%d",arr1[i]);

    printf("\n");

    for(j=0;j<=4;j++)
    printf("\t%d",arr2[j]);

    printf("\n");
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=4;j++)
        {
        if(arr1[i]==arr2[j])
        {
            printf("\t%d",arr2[j]);
        }
        }
    }
}