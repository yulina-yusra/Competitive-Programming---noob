#include <stdio.h>
int main()
{
    int a,b,c,d,e;
    while(scanf("%d %d %d %d %d", &a,&b,&c,&d,&e)!=EOF)
    {
        if(a==0&&b==0&&c==0&&d==0&&e==0)
        {
            break;
        }
        else
        {
            printf("%d\n", a*b*c*d*d*e*e);
        }
    }
    return 0;
}
