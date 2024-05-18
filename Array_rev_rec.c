#include<stdio.h>
void f(int *p,int n)
{
if(n<= 0)
	return ;

f(p+1,n-1);
printf("%d\t",*p);
}
void main()
{
int i,n;
scanf("%d",&n);
int a[n];
for(i = 0;i < n;i++)
scanf("%d",&a[i]);
f(a,n);
}