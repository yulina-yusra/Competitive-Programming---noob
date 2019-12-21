#include <stdio.h>
int main()
{
    int t,a,b,c,i;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d", &a,&b,&c);
        if(a<=20&&b<=20&&c<=20)
        {
            printf("Case %d: good\n", i+1);
        }
        else
        {
            printf("Case %d: bad\n", i+1);
        }
    }
    return 0;
}
