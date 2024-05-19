#include<stdio.h>
int sum = 0;
int sum_of_arr(int *p,int n)
{
if(n<=  0)
return 0;
return *p + sum_of_arr(p+1,n-1);

}
void main()
{
int i,n,sum = 0;
scanf("%d",&n);
int a[n];
for(i = 0;i < n;i++)
scanf("%d",&a[i]);
int res = sum_of_arr(a,n);
printf("sum = %d",res);
}