
#include <stdio.h>
int main() {
    int i,j,n,count = 1;
    scanf("%d",&n);
    int fir[n],dup[n];
    for(i = 0;i < n;i++)
    {
    scanf("%d",&fir[i]);
    dup[i]=-1;
    }
    for(i = 0;i < n;i++)
    {
        count = 1;
        for(j = i+1;j< n;j++)
        {
                if(fir[i]==fir[j])
                {
                    count++;
                    dup[j]=0;
                }
            }
        if(dup[i]!=0)
            dup[i]=count;
}
for(i=0;i < n;i++)
if(dup[i])
    printf("%d = %d\n",fir[i],dup[i]);
    return 0;
}