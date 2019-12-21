#include <stdio.h>
#include <math.h>
#define pi acos(-1)
int main()
{
    double t,l,r,w,a1,a2,i;
    scanf("%lf", &t);
    for(i=0;i<t;i++)
    {
        scanf("%lf", &l);
        w=(l*6)/10;
        r=l/5;
        a1=pi*r*r;
        a2=(l*w)-a1;
        printf("%.2lf %.2lf\n", a1,a2);
    }
    return 0;
}
