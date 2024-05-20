
#include <stdio.h>

int main() {
    int n,i,mx,mn;
    scanf("%d",&n);
    int a[n];
    for(i = 0;i < n;i++)
    scanf("%d",&a[i]);
    mx=a[0];
    mn=a[0];
    for(i = 0;i < n;i++)
    {
        
            if(a[i]>mx)
            mx = a[i];
            if(a[i]<mn)
            mn=a[i];
        
        }
    printf("Greater  =  %d\tLesser = %d",mx,mn);

    return 0;
}