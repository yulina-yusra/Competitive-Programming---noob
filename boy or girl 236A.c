#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int i,len;
    int frq[26];
    scanf("%s", &s);
    len=strlen(s);
    for(i=0;i<26;i++)
    {
        frq[i]=0;
    }
    for(i=0;i<len;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            frq[s[i]-97]++;
        }
    }

    for(i=0;i<26;i++)
    {
       if(frq[i]>1)
       {
        len=len-(frq[i]-1);
       }
    }
    if(len%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }
    return 0;
}
