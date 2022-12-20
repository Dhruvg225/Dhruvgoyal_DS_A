#include<stdio.h>
#include<stdlib.h>
void main(){
    int *a;int *b;int *c;
    int n,m,i,x,found=0,j,temp=1;
    printf("Dhruv Goyal\n");
    printf("Enter Size Of A Set:");
    scanf("%d",&n);
    a=(int *)calloc(n,sizeof(n));
    printf("Enter Elements Of A Set");
    for(i=0;i<n;i++){
        scanf("%d",a+i);}
    printf("\nEnter Size Of B Set:");
    scanf("%d",&m);
    b=(int *)calloc(n,sizeof(m));
    printf("\nEnter Elements Of B Set");
    for(i=0;i<m;i++){
        scanf("%d",b+i);}
    x=n+m;
    c=(int*)calloc(x,sizeof(x));
    for(i=0;i<n;i++){
        *(c+i)=*(a+i);}
    for(i=0;i<m;i++){
        found=0;
        for(j=0;j<n;j++){
            if(*(b+i)!=*(a+j)){
                found++;}}
        if(found==n){
            *(c+n+temp)=*(b+i);
            temp++;}}
            printf("elements of A U B :");
     for(i=0;i<x;i++){
            if(*(c+i)!=0){
        printf("%d ",*(c+i));}}}
