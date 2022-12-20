#include<stdio.h>
void main()
{
    int a[100],pos,n,num,i;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter position where you want to insert element");
    scanf("%d",&pos);
    printf("enter value to be inserted");
    scanf("%d",&num);
    for(i=n-1;i>pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=num;
    for(i=0;i<=n;i++)
    {
        printf("%d",a[i]);
    }
}
