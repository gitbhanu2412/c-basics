#include<stdio.h>
void main()
{
int i,n,j,count;
scanf("%d",&n);
int a[n];
for(i = 0;i < n;i++)
scanf("%d",&a[i]);
for(i = 0;i <  n;i++)
{
count = 0;
for(j = n-1 ;j >= 0;j--)
{
if(i!=j)
{
if(a[i]==a[j])
{
count++;
break;
}
}
}
if(count ==0)
	printf("%d",a[i]);
else
{
	printf("no unique elements");
break;
}
}
}