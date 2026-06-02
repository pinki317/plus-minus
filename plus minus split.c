#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int t;
        scanf("%d",&t);
        char s[t];
        scanf("%s",s);
        int a=0;
        int b=0;
         for(int j=0;j<t;j++)
         {
             if(s[j]=='+')
                a++;
             if(s[j]=='-')
                b++;
         }
         if(a>0 && b==0)
            printf("%d\n",a);
         else if(b>0 && a==0)
            printf("%d\n",b);
         else
            printf("%d\n",abs(a-b));
    }
    return 0;
}
