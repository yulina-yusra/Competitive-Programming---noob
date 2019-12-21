#include <stdio.h>
#include <math.h>
int main()
{
    int t,i,n,j;
    double f;
    scanf("%d", &t);
    for(i=1;i<=t;i++)
    {
        scanf("%d", &n);
        printf("Case %d: ", i);
        for(j=sqrt(n);j<n;j++)
        {
            f=n/sqrt(n-j);
            if(f==(int)f)
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    return 0;
}
