#include<stdio.h>
void main()
{
int m,n,i,j;
printf("enter the row and column size\n");
scanf("%d%d",&m,&n);
int a[m][n];
printf("enter the elements\n");
for(i = 0;i < m;i++)
{
for(j = 0;j < n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("the elements before row reverse are\n");
for(i = 0;i < m;i++)
{
for(j = 0;j < n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
int left = 0,right = n-1;
int swap;
for(i = 0;i < m;i++)
{
while(left < right)
{
swap = a[i][left];
a[i][left] = a[i][right];
a[i][right] = swap;
left++;
right--;
}
}
printf("the elements after row reverse are\n");
for(i = 0;i < m;i++)
{
for(j = 0;j < n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
}