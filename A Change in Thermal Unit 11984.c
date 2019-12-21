#include <stdio.h>
int main()
{
   int tst,i;
   double a,b;
   scanf("%d", &tst);
   for(i=1;i<=tst;i++)
   {
       scanf("%lf %lf", &a,&b);
       a=a+(5.0/9.0)*b;
       printf("Case %d: %.2lf\n", i,a);
   }
   return 0;
}
