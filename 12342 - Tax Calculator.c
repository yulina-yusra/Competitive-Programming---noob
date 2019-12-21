#include <stdio.h>
#include <math.h>
int main()
{
    double t,x,i,s,t1,t2,t3;
    scanf("%lf", &s);
    for(i=0;i<s;i++)
    {
        scanf("%lf", &x);
        if(x<=180000)
        {
            t=0;
        }
        else if(x>180000&&x<=480000)
        {
            x=x-180000;
            t=x*0.1;
            if(t<2000)
            {
                t=2000;
            }
        }
        else if(x>480000&&x<=880000)
        {
            t1=300000*0.1;
            x=x-480000;
            t=t1+(x*0.15);
            if(t<2000)
            {
                t=2000;
            }
        }
        else if(x>880000&&x<=1180000)
        {
            t1=300000*0.1;
            t2=400000*0.15;
            x=x-880000;
            t=t1+t2+(x*0.2);
        }
        else
        {
           t1=300000*0.1;
            t2=400000*0.15;
            t3=300000*0.2;
            x=x-1180000;
            t=t1+t2+t3+(x*0.25);
        }
           printf("Case %.0lf: %d\n", i+1,(int)ceil(t));
    }
    return 0;
}
