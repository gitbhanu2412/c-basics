// Online C compiler to run C program online
#include <stdio.h>
int * sorted1(int *p,int n)
{
    int temp;
       for(int i = 0;i < n;i++)
    {
        for(int j = i+1;j < n;j++)
        {
            if(p[i] <= p[j])
            {
                temp = p[j];
                p[j] = p[i];
                p[i] = temp;
            }
        
        }
    }
    return p;
    
}

int main() {
    int i,j,n,count = 0,temp;
    scanf("%d",&n);
    int fir[n],sec[n],sorFir[n],sorSec[n];
    for(i = 0;i < n;i++)
    scanf("%d",&fir[i]);
    for(j = 0;j < n;j++)
    scanf("%d",&sec[j]);
    int sorted[n*2];
    
    for(i = 0;i < n;i++)
 {
        for(j = i+1;j < n;j++)
        {
            if(fir[i] <= fir[j])
            {
                temp = fir[j];
                fir[j] = fir[i];
                fir[i] = temp;
            }
            if(sec[i] <= sec[j])
            {
                temp = sec[j];
                sec[j] = sec[i];
                sec[i] = temp;
            }
        }
    }
     for(j = 0;j < n;j++)
    printf("%d\t",fir[j]);
    printf("\n");
     for(j = 0;j < n;j++)
    printf("%d\t",sec[j]);
    printf("\n");
    for(i = 0;i<n;i++)
    sorted[i]=fir[i];
    for(j=0;j<n;j++)
    {
    sorted[i]=sec[j];
    i++;
    }
    int *ptr = sorted1(sorted,n*2);
    
        for(j = 0;j < n*2;j++)
    printf("%d\t",ptr[j]);
    
    return 0;
}