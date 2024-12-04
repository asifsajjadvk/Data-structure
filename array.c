#include<stdio.h>
int main()
{
 int a[100];
 int i,n,data,m;
 printf("Enter the length of array\n");
 scanf("%d",&n);
 printf("Enter Array\n");
 for(i=0;i<n;i++)
  scanf("%d",&a[i]);
 printf("Enter the data for insertion\n");
 scanf("%d", &data);
 printf("Enter the positon for Insertion\n");
 scanf("%d", &m);
 for(i=n;i>=m-1;i--)
  a[i+1]=a[i];
  a[m-1]=data;
 printf("inserted array\n");
 for(i=0;i<=n;i++)
  printf("%d \n",a[i]);
return 0;
}
