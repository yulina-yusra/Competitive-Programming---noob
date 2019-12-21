#include <stdio.h>
int main()
{
    int t,c=0,i,z,n,j;
    while(scanf("%d", &t)!=EOF)
    {
        if(t==0)
            {
                break;
            }
        else
        {
            c++;
            z=0;
            n=0;
            for(i=1;i<=t;i++)
    {
        scanf("%d", &j);
        if(j==0)
            {
                z++;
            }
        else
        {
            n++;
        }
    }
        printf("Case %d: %d\n", c,n-z);
        }
    }
    return 0;
}
