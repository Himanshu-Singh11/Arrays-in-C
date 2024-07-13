#include<stdio.h>
int main()
{
    int a[5],b[5],c[5];
    int i;
    for(i=0;i<=4;i++)
    {
        printf("enter any 2 number");
        scanf("%d %d",&a[i],&b[i]);
        c[i]=a[i]+b[i];
    }
    printf("\n FIRST ARRAY \n");

    for(i=0;i<=4;i++)
    printf("\t %d", a[i]);

    printf("\n SECOND NUMBER \n");

    for(i=0;i<=4;i++)
    printf("\t %d", b[i]);

    printf("\n THIRD ARRAY \n");

    for(i=0;i<=4;i++)
    printf("\t %d", c[i]);
    return(0);
}