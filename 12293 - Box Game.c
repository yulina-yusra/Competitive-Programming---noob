#include <stdio.h>
int main()
{
    int n,count;
    while(scanf("%d", &n)!=EOF)
    {
        if(n==0)
        {
            break;
        }

        else
        {

            if(n%2!=0)
            {
                printf("Bob\n");
            }
            else
            {
                printf("Alice\n");
            }
        }
    }
}
