#include<stdio.h>
int main()
{
    int x,y;
    int a,b,c;
    scanf("%d",&y);
    for(x=1; x<=y; x++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a>b && b>c) printf("Case %d: %d\n",x,b);
        if(a>c && c>b) printf("Case %d: %d\n",x,c);
        if(b>a && a>c) printf("Case %d: %d\n",x,a);
        if(b>c && c>a) printf("Case %d: %d\n",x,c);
        if(c>a && a>b) printf("Case %d: %d\n",x,a);
        if(c>b && b>a) printf("Case %d: %d\n",x,b);
    }
    return 0;
}
