#include<stdio.h>
 void main()
 {
  int i,a[20],j,n;
  printf("Enter size of array: ");
  scanf("%d",&n);
  printf("Enter any %d elements in array: ",n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  printf("Duplicate elements are: ");
  for(i=0;i<n;i++)
   {
    for(j=i+1;j<n;j++)
    {
    if(a[i]==a[j])
    {
    printf("%d\n",a[i]);
    }
   }
   }
 }
