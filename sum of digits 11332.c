#include <stdio.h>
int sum(int n)
{
    int d,res=0;
    while(n!=0)
    {
        d=n%10;
        res=res+d;
        n=n/10;
    }
    return res;
}
int main()
{
    int n=1,result;

    while(n>0)
    {
    scanf("%d", &n);
    if(n==0)
    {
        break;
    }
    result=sum(sum(sum(n)));
    printf("%d\n", result);
    }
    return 0;
}
