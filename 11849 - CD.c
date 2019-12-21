#include <stdio.h>
 int s1[1000000],s2[1000000];
int main()
{
    int t1,t2,i,j,count;
   while(scanf("%d %d", &t1,&t2)!=EOF)
    {
        count=0;
        if(t1==0&&t2==0)
        break;
   else{
    for(i=0;i<t1;i++)
    {
        scanf("%d", &s1[i]);
    }
    for(i=0;i<t1;i++)
    {
        scanf("%d", &s2[i]);
    }
    for(i=0;i<t1;i++)
    {
        for(j=0;j<t2;j++)
        {
            if(s1[i]==s2[j])
                count++;
        }
    }
    printf("%d\n", count);
   }
    }
    return 0;
}
