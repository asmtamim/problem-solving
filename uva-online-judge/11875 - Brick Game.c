#include<stdio.h>
int main()
{
    int a,b;
    int i,j,k,temp;
    int x,y,z,arr[10];
    scanf("%d",&b);
    for(a=1; a<=b; a++)
    {
        scanf("%d",&y);
        if(y>1 && y<11 && y%2!=0)
        {
            for(x=1; x<=y; x++)
            {
                scanf("%d",&arr[x]);
            }
        }
        printf("Case %d: %d\n",a,arr[(x+1)/2]);
    }
    return 0;
}
