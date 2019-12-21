#include <stdio.h>
int main()
{
   int number,i,j,k,count,no=1;
   scanf("%d", &number);

    for(i=1;i<=10000000;i++)
    {

        for(j=2;j<i;j++)
        {
            if(i%j==0&&j!=2&&j!=3&&j!=5)
            {
             count=0;
            for(k=2;k<j;k++)
                {
                    if(j%k==0)
                    {
                        count++;
                    }
                }

            }
            if(count==0)
                {
                    no++;
                }

        }
    if(no==number)
        {
      printf("%d", i);
        break;
        }

    }
}
