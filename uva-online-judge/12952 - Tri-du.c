#include<stdio.h>
int main()
{
    int x,y;
    while(scanf("%d %d",&x,&y)==2)
    {
        if(x>=y) printf("%d\n",x);
        else if(y>x) printf("%d\n",y);
    }
    return 0;
}
