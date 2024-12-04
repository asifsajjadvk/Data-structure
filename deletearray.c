#include<stdio.h>
int main()
 {
 int a[100],i,n,pos;
 printf("Enter the size of an array\n");
 scanf("%d",&n);
 printf("Enter Array\n");
 for(i=0;i<n;i++)
 scanf("%d",&a[i]);
 printf("Enter the position element to delete\n");
 scanf("%d",&pos);
 if(pos>n+1)
  printf("Not find in array\n");
  else
   {
   for(i=pos-1;i<n-1;i++)
   a[i]=a[i+1];
   printf("Deleted Array is \n");
   for(i=0;i<n-1;i++)
    printf("%d\n",a[i]);
   }
 return 0;
 }
 
