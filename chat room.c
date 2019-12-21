#include <stdio.h>
#include <string.h>
int main()
{
    char s[]={ 'h', 'e' , 'l', 'l', 'o' };

    char g[101];
    scanf("%s", &g);
    int i,j=0,count=0;

    for(i=0;i<strlen(g);i++)
    {
        if(g[i]==s[j])
        {
            count++;
            j++;
        }
    }
    if(count>4)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}
