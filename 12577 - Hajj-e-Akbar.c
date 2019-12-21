#include <stdio.h>
int main()
{
    char s[15];
    int count=0;
    while(gets(s)!=EOF)
    {
        ++count;
        if(s[0]=='*')
        {
            break;
        }
        else
        {
            if(s[0]=='H')
            {
                printf("Case %d: Hajj-e-Akbar\n", count);
            }
            else
            {
                printf("Case %d: Hajj-e-Asghar\n", count);
            }
        }
    }
    return 0;
}
