#include<stdio.h>
main()
{
    int i,n,a[10],j,temp;
    printf("Enter the size of an array ");
    scanf("%d",&n);
    printf("Enter the element in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Before sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j=j-1;
        }
        a[j+1]=temp;
    }
    printf("\nAfter sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
