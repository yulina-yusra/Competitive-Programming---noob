#include <stdio.h>
int main()
{
    double hr,min,ang;
    char a;
    while(scanf("%lf%lf", &hr,&a,&min)!=EOF)
    {
        if(hr==0&&min==00)
        {
            break;
        }
        else
        {
            hr=hr*30;
            ang=hr+((min/60)*30)-min*6;
            if(ang>180)
            {
                printf("%.3lf\n", 360-ang);
            }
            else if(ang<0&&ang>-180)
            {
                printf("%.3lf\n", ang*-1);
            }
            else if(ang<0&&ang<=-180)
            {
                printf("%.3lf\n", ang+360);
            }
            else
            {
                printf("%.3lf\n", ang);
            }
        }
    }
  return 0;
}
