#include <stdio.h>
void main()
{
    int a[100],n,t,end,i;
    printf("enter size of array");
    scanf("%d", &n);
    end=n-1;
    printf("enter elements of array");
    for (i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n/2;i++)
        {
        t=a[i];
        a[i]=a[end];
        a[end] = t;
        end--;
    }
    printf("Reversed array elements are:\n");
    for (i=0;i<n;i++)
        {
        printf("%d\n",a[i]);
    }
}
