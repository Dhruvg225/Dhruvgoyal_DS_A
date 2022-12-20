#include <stdio.h>

int main()
{
   int a[100],i,n,p,num;
    printf("Input the size of array : ");
    scanf("%d", &n);
       printf("Input %d elements in the array in ascending order:\n",n);
       for(i=0;i<n;i++)
            {
	      scanf("%d",&a[i]);
	    }
   printf("Input the value to be inserted : ");
   scanf("%d",&num);
   for(i=0;i<n;i++)
   {
    if(num<a[i])
     {
       p=i;
       break;
     }
     else
     {
     	p=i+1;
      }
	 }
   for(i=n+1;i>=p;i--)
      a[i]= a[i-1];
      a[p]=num;
      printf("\nAfter Insert the list is :\n");
   for(i=0;i<=n;i++)
      printf("%d",a[i]);
	  printf("\n");
}
