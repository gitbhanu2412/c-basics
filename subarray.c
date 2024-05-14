#include<stdio.h>
void main()
{
int m,i,j,k,l,maxsum,maxsum2;
printf("Enter the m\n");
scanf("%d",&m);
int a[m],b[m];
printf("Enter the elements into the array\n");
for(i = 0;i < m;i++)
{
scanf("%d",&a[i]);
}

for(i = 0;i < m;i++)
{
for(j = i;j < m;j++)
{
int sum = 0;
for(k = i; k <= j;k++)
{
printf("%d\t",a[k]);
sum += a[k];
for(l = 0;l <= m;l++)
{
b[m] = sum;
}
printf("\n");
}
}
}
for(l = 0;l < m;l++)
{
printf("%d\t",b[m]);
}
maxsum = b[0];
for(i = 1;i < m;i++)
{
if(maxsum > b[i])
maxsum2 = maxsum;
maxsum2 = b[i];
}



printf("The max sum =");
printf("%d",maxsum2);
}