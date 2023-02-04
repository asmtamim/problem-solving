#include<stdio.h>
int main()
{
    int x,y,z,a;
    scanf("%d",&y);
    for(x=1; x<=y; x++)
    {
        scanf("%d",&z);
        a=(2*z)-1;
        printf("Case #%d: %d\n",x,a);
    }
    return 0;
}
