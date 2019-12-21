#include <stdio.h>
#include <string.h>
int main()
{
    int t,n,i,j,a,b,w,ti;
    char c[15];
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        a=0,b=0,w=0,ti=0;
        scanf("%d", &n);

        for(j=0; j<=n; j++)
        {
            scanf("%c", &c[j]);
        }
        c[j]='\0';
        for(j=0;j<=n;j++)
        {
            if(c[j]=='A')
            {
                a++;
            }
            else if(c[j]=='B')
            {
                b++;
            }
            else if(c[j]=='W')
            {
                w++;
            }
            else if(c[j]=='T')
            {
                ti++;
            }
        }
        printf("Case %d: ", i+1);
         if(w==0&&b==0&&a>0&&ti==0)
        {
            printf("ABANDONED\n");
        }
        else if(w==0&&ti==0)
        {
            printf("BANGLAWASH\n");
        }
        else if(b==0&&ti==0)
        {
            printf("WHITEWASH\n");
        }

        else if(b>w)
        {
            printf("BANGLADESH %d - %d\n", b,w);
        }
        else if(b<w)
        {
            printf("WWW %d - %d\n", w,b);
        }
        else if(b==w)
        {
            printf("DRAW %d %d\n", b,ti);
        }
    }



    return 0;
}
