#include<stdio.h>
int main()
{
    int x,y;
    int e,f,c,g,h,s;
    scanf("%d",&y);
    for(x=1; x<=y; x++)
    {
        scanf("%d %d %d",&e,&f,&c);

        g=e+f;
        s=0;

        while(g>=c)
        {
            h=(g/c);
            g=(g/c)+(g%c);
            s=s+h;
        }
        printf("%d\n",s);
    }
    return 0;
}

