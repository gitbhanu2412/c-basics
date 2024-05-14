#include<stdio.h>
void main()
{
int m,n,i,j,swap;
printf("Enter the m and n values\n");
scanf("%d%d",&m,&n);
int a[m][n],t[m][n];
printf("Enter the elements into the array\n");
for(i = 0;i < m;i++)
{
for(j = 0;j < n;j++)
{
scanf("%d",&a[i][j]);
}
}

printf("The elements in the array\n");
for(i = 0;i < m;i++)
{
for(j = 0;j < n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}

for(j = 0;j < m;j++)
{
int top = 0,bottom = m-1;
while(top < bottom)
{
swap = a[top][j];
a[top][j] = a[bottom][j];
a[bottom][j] = swap;
top++;
bottom--;
}
}
for(i = 0;i < m;i++)
{
for(j = 0;j < n;j++)
{
t[j][i] = a[i][j];
}
}
printf("The elements in the array after 90 degree rotation\n");
for(i = 0;i < m;i++)
{
for(j = 0;j < n;j++)
{
printf("%d\t",t[i][j]);
}
printf("\n");
}
}