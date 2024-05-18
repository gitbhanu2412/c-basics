#include<stdio.h>
void main()
{
int n,i;
scanf("%d",&n);
int a[n];
for(i = 1;i <= n;i++)
scanf("%d",&a[i]);
for( i = 1;i <= n;i++)
printf("%d\t",a[i]);
}