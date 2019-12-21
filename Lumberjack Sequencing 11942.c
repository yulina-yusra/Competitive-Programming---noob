#include <stdio.h>
int main()
{
    int t,i,j,a[10];
    scanf("%d", &t);

    for(i=0;i<t;i++)
    {
        int count = 0;
        for(j=0;j<10;j++)
        {
        scanf("%d", &a[j]);
        }
        while(i==0)
        {
             printf("Lumberjacks:\n");
             break;
        }
        if(a[0]<a[1])
        {
            for(j=1;j<9;j++)
            {
                if(a[j]>a[j+1])
                {
                    count=1;
                    break;
                }
            }
        }
        else if(a[0]>a[1])
        {
            for(j=1;j<9;j++)
            {
                if(a[j]<a[j+1])
                {
                    count=1;
                    break;
                }
            }
        }
        if(count==0)
        {
            printf("Ordered\n");
        }
        else
        {
            printf("Unordered\n");
        }
        }
return 0;
    }

