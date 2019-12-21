#include <stdio.h>
int main()
{
    int no,a,b,c,x,i;
    scanf("%d", &no);
    for(i=1;i<=no;i++)
    {
        scanf("%d %d %d", &a,&b,&c);
        x=a;
        if((x>b&&x>c)||(x<b&&x<c))
        {
            x=b;
            if((b>a&&b>c)||(b<a&&b<c))
              {
                  x=c;
              }
        }
        printf("Case %d: %d\n", i,x);
    }
    return 0;
}
