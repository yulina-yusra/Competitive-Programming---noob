#include <stdio.h>
#include <math.h>
int main()
{

   double r,t,i,x,y;
   scanf("%lf", &t);
   for(i=0;i<t;i++)
   {
       scanf("%lf %lf %lf", &x,&y,&r);
       double n=sqrt(x*x+y*y);
       printf("%.2lf %.2lf\n", r-n,r+n);
   }
   return 0;
}
