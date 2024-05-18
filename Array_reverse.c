#include<stdio.h>
void main()
{
int i,n;
scanf("%d",&n);
int a[n];
for(i = 1;i <= n;i++)
scanf("%d",&a[n]);
printf("===============================");
for(i = n;i >= 0;i--)
printf("%d\t",a[i]);
}