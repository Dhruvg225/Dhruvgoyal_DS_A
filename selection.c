#include<stdio.h>
void main()
{
    int a[20],i,j,pos,n,t;
    printf("enter size of array \n");
    scanf("%d",&n);
    printf("enter elements of array \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[pos])
                pos=j;
        }
        if(pos!=i)
        {
         t=a[i];
         a[i]=a[pos];
         a[pos]=t;
        }
    }
    printf("sorted list is\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
