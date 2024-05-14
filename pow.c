#include<stdio.h>
void main()
{
int n,i,a,prod = 1;
printf("enter a number");
scanf("%d",&n);
printf("enter a number");
scanf("%d",&a);
for(i = 1;i <=n;i++)
{
prod = prod *a;
}
printf("%d",prod);
}