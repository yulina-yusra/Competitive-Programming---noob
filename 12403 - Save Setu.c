#include <stdio.h>
int main()
{
    int t,i,tk,sum=0;
    char s[10];
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%s", s);
        if(s[0]=='d')
        {
            scanf("%d", &tk);
            sum=sum+tk;
        }
        else
        {
            printf("%d\n", sum);
        }
    }
    return 0;
}
