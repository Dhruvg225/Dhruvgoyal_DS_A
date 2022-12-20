#include<stdio.h>
void main()
{
    int a[100],pos,n,i;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter position where you want to delete element");
    scanf("%d",&pos);
    if (pos>= n+1 )
    printf("Deletion not possible.\n");
    else
    {
        for (i=pos-1;i<n-1;i++ )
        a[i]=a[i+1];
        printf("Resultant array is\n");
        for(i=0;i<n-1;i++ )
        printf("%d\n", a[i]);
    }
}

