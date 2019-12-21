#include <stdio.h>
int main()
{
    int no,i;
    long long int a,b;
    scanf("%d", &no);
    for(i=0;i<no;i++)
    {
        scanf("%lld %lld", &a,&b);
        if(a>b)
            printf(">\n");
        else if(a<b)
            printf("<\n");
        else if(a==b)
            printf("=\n");
    }
    return 0;
}

