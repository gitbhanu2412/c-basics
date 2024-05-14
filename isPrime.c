
#include <stdio.h>
#include<stdbool.h>
int isPrime(int,bool);
int main() {
   int n;
   bool flag = 1;
   scanf("%d",&n);
   isPrime(n,flag);
    return 0;
}
int isPrime(int num,bool flag)
{
    
    for(int i = 2;i <= num/2;i++)
   {
       if(num % i == 0)
       {
           flag = 0;
       printf("composite number");
       break;
       }
   }
   if(flag)
   printf("prime number");
}