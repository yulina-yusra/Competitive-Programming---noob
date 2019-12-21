#include <stdio.h>
int main()
{
    int x1,x2,c,n;
    while(scanf("%d %d", &c,&n)!=EOF)
    {
        if(c==-1&&n==-1)
        {
            break;
        }
        else
        {
            if(n>c)
            {
                x1=n-c;
                x2=100+c-n;
                if(x1<=x2)
                {
                    printf("%d\n", x1);
                }
                else
                {
                    printf("%d\n", x2);
                }
            }
            else if(n<c)
            {
                x1=c-n;
                x2=100+n-c;
                 if(x1>=x2)
                {
                    printf("%d\n", x2);
                }
                else
                {
                    printf("%d\n", x1);
                }

            }
            else
            {
                printf("0\n");
            }
        }
    }
    return 0;
}
