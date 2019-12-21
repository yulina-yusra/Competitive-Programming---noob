#include <stdio.h>
int main()
{
    int n,i,j,k,n1,n2,count,p,l,sum;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d", &n1,&n2);
        p=0;
        for(j=n1;j<=n2;j++)
        {
            count=0;
            sum=0;
            while(j!=0)
           {
            k=j%10;
            sum=sum+k;
            j=j/10;
           }
           //printf("%d", sum);
           for(l=2;l<sum;l++)
           {
               if(sum%l==0)
                count++;
                break;
           }
           if(count==0)
           {
               p++;
           }
           else
            p=0;
        }
        printf("%d", p);
    }
}
