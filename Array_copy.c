#include<stdio.h>
void main()
{
int i,n,sum = 0;
scanf("%d",&n);
int orig[n],copy[n];
for(i = 1;i <= n;i++)
scanf("%d",&orig[i]);
for(i = 1;i <= n;i++)
copy[i] = orig[i];
printf("original array\n");
for(i = 1;i <= n;i++)
printf("%d\t",copy[i]);
printf("\ncopied array\n");
for(i = 1;i <= n;i++)
printf("%d\t",copy[i]);
}