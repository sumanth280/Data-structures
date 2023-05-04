#include<stdio.h>
main()
{
    int a[10],i,n;
    printf("Enter the size of an array:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter index %d element",i);
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        printf("\nelement at index %d is %d",i,a[i]);
    }
    printf("\n\n");
    int pos,data;

    printf("Enter the position you want to insert:");
    scanf("%d",&pos);
    printf("\n");
    printf("Enter the data you want to insert:");
    scanf("%d",&data);

    for(i=n;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=data;
    n++;
    printf("\nupdated array :");
    for(i=0;i<n;i++)
    {
        printf("\nelement at index %d = %d ",i,a[i]);
    }

}

