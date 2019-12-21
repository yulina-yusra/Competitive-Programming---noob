#include <stdio.h>
int main()
{
    int n,age,i,j;
    while(scanf("%d", &n)!=EOF)
    {
        if(n==0)
        {
            break;
        }
        else
        {
            int a[105];
            for(i=0; i<105; i++)
            {
                a[i]=0;
            }
            for(i=1; i<=n; i++)
            {
                scanf("%d", &age);
                a[age]++;
            }
            for(i=1; i<=100; i++)
            {
                if(a[i]>0)
                {
                    if(i>1)
                    {
                        printf(" ");
                    }
                    for(j=1; j<=a[i]; j++)
                    {
                        printf("%d", i);
                        if(j<a[i])
                        {
                            printf(" ");
                        }
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}
