#include <stdio.h>
int main()
{
    int n,t,i;
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%d", &n);
        int x=(((((n*567)/9)+7492)*235)/47)-498;
        x=x%100;
        x=x/10;
        if(x>0)
            printf("%d\n", x);
        else
            printf("%d\n", -x);
    }
    return 0;
}
