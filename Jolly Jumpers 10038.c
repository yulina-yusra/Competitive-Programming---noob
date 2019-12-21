#include <stdio.h>
int main()
{
    int n,i,j;
   while(scanf("%d", &n)!=EOF)
   {
       int a[n];
       int d=0;
       for(i=0;i<n;i++)
       {
           scanf("%d", &a[i]);
       }
       int x[n-1];
       for(i=0;i<n-1;i++)
       {

           if(a[i]>a[i+1])
           {
               x[i]=a[i]-a[i+1];
           }
           else
           {
               x[i]=a[i+1]-a[i];
           }



   }
   int s[n-1];
   for(i=0;i<n-1;i++)
   {
       s[i]=i+1;
   }



   for(i=0;i<n-1;i++)
   {
      int count=-1;
       for(j=0;j<n-1;j++)
       {
           if(s[i]==x[j])
           {
               count=0;
           }
       }
       if(count==0)
       {
           d++;
       }
   }


   if(d>=n-1)
   {
       printf("Jolly\n");
   }
   else
   {
       printf("Not jolly\n");
   }
   }

return 0;
}
