#include <stdio.h>
int main()
{
    int n=1,sum,i;
    while(n!=0)
    {
       scanf("%d", &n);
       sum=1;
       if(n>0)
       {
       for(i=2;i<=n;i++)
       {
        sum=sum+i*i;
        }
        printf("%d\n", sum);
        }
    }
    return 0;
}
