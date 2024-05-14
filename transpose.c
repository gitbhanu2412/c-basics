#include<stdio.h>
void main()
{
int m,n,i,j;
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
printf("The transpose of the matrix is\n");
for(i = 0;i < m;i++)
{
for(j = 0;j < n;j++)
{
t[j][i] = a[i][j];
}
}
printf("The transpose is\n");
for(i = 0;i < m;i++)
{
for(j = 0;j < n;j++)
{
printf("%d\t",t[i][j]);
}
printf("\n");
}
}