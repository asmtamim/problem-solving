#include<stdio.h>
int main()
{
    int m,n,s;
    while(scanf("%d",&n)==1 && n>0)
    {
        n++;
        s=0;
        while(n>2)
        {
            m=(n/3);
            n=(n/3)+(n%3);
            s=s+m;
        }
        printf("%d\n",s);
    }
    return 0;
}
