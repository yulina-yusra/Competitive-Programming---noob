#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    int i;
    while(gets(s))
    {
        int count=0,flag=0;
        for(i=0;s[i]!='\0';i++)
        {
            if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z'))
            {
            flag=1;
            }
            else
            {
                count+=flag;
                flag=0;
            }
        }
          count+=flag;
         printf("%d\n", count);
    }
    return 0;
}
