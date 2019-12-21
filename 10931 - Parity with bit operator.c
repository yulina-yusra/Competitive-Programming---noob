#include <stdio.h>
int main()
{
    int n,s[100],one,i;
    while(scanf("%d", &n)!=0)
    {
        if(n==0)
        {
            break;
        }
        i=0,one=0;
        while(n>0)
        {
        if(n&1==1)
        {
            s[i++]=1;
            one++;
        }
        else
        {
            s[i++]=0;
        }
        n=n>>1;
        }
        printf("The parity of ");
        while(i>0)
        {
            printf("%d", s[i-1]);
            i--;
        }
        printf(" is %d (mod 2).\n", one);

    }
    return 0;
}
