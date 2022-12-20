#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,n,m,p,q;
    printf("Dhruv Goyal\n");
    printf("enter no of rows and columns");
    scanf("%d%d",&n,&m);
    printf("enter elements of A");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
}
}
