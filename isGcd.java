import java.io.*;
class Gcd
{
public int gcd(int a,int b)
{
int result = a<b?a:b;
while(result>0)
{
if(a % result == 0 && b%result==0)
break;
result--;
}
return result;
}
}
class isGcd
{
public static void main(String args[])
{
Gcd gc = new Gcd();
int result = gc.gcd(98,56);
System.out.println(result);
}
}