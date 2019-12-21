#include <stdio.h>
 unsigned long long int n,k,t,i,count,rem ;
int main()
{

    scanf("%llu", &t);
    for(i=0;i<t;i++)
    {
        scanf("%llu %llu", &n,&k);
        count=0;
        while(n!=0)
        {
            rem=n%k;
            if(rem==0)
            {
                n=n/k;
                count++;
            }
            else
            {
                n=n-rem;
                count+=rem;
            }
        }
        printf("%llu\n", count);
    }
return 0;

}
