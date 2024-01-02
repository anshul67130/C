#include <stdio.h>
long long ack(long long  m, long long n)
{
    if (m==0)
    {
        return n+1;
    }
    else if (n==0)
    {
        return ack(m-1,1);
    }
    else
    {
        return ack(m-1,ack(m,n-1));
    }
}
int main()
{
    int a,b;
    printf("Enter a and b: ");
    scanf("%d%d",&a,&b);
    printf("ackermann for %d , %d is %lld\n",a,b,ack(a,b));
    return 0;
}
