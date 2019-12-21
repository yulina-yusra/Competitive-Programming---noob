#include <stdio.h>
int main()
{
   long long int n=1,sum,i;
    while(n>-1)
    {
        scanf("%lld", &n);
        sum=1;
        for(i=0;i<=n;i++)
        {
            sum=sum+i;
        }
        if(n>-1){
        printf("%lld\n", sum);
        }
    }
    return 0;
}
