#include <stdio.h>
int main()
{
    int t,i,n,size,anim,frnd,j,sum;
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        sum=0;
        scanf("%d", &n);
        for(j=0;j<n;j++)
        {
            scanf("%d %d %d", &size,&anim,&frnd);
            sum=sum+(size*frnd);
        }
        printf("%d\n", sum);
    }
    return 0;
}
