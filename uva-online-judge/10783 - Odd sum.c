#include<stdio.h>
int main()
{
    int x,y;
    int a,b;
    scanf("%d",&y);
    for(x=1; x<=y; x++)
    {
        int c,sum=0;
        scanf("%d %d",&a,&b);
        for(c=a; c<=b; c++){
            if(c%2!=0){
                sum=c+sum;
            }
        }
        printf("Case %d: %d\n",x,sum);
    }
    return 0;
}
