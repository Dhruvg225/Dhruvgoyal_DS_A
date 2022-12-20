#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,n,m,p,q,k;
    printf("Dhruv Goyal\n");
    printf("enter no of rows and columns");
    scanf("%d%d",&n,&m);
    printf("enter elements of A");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }}
    printf("enter rows and columns of second array");
    scanf("%d%d",&p,&q);
    printf("enter elements of B");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }}
    printf("Addition of two arrays =\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<p;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
            }
            printf("\n");
    }
}


