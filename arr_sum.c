#include<stdio.h>
int main()
{
    int arr[5];
    int i,s1=0,s2=0;
    for(i=0;i<=4;i++)
    {
        printf("enter a number");
        scanf(" %d",&arr[i]);
    }
        for(i=0;i<=4;i++)
        {
            if(i%2==0)
            s1=s1+arr[i];
            else
            s2=s2+arr[i];
        }
        printf("\nsum1 is %d",s1);
        printf("\nsum2 is %d",s2);
return(0);
}