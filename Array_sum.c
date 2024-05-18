#include<stdio.h>
void main()
{
int i,n,sum = 0;
scanf("%d",&n);
int a[n];
for(i = 1;i <= n;i++)
scanf("%d",&a[i]);
for(i = 1;i <= n;i++)
sum += a[i];
printf("sum = %d",sum);
}