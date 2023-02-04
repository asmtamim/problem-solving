#include<stdio.h>
int main()
{
    int std[100],max;
    int x,y,n,a,b;

    scanf("%d",&y);
    for(x=1; x<=y; x++)
    {
        scanf("%d",&b);
        for(n=0; n<b; n++){
            scanf("%d",&std[n]);
        }
        max=std[0];
        for(a=0; a<b; a++){
                if(std[a]>max){
            max=std[a];
            }
        }

        printf("Case %d: %d\n",x,max);
    }
    return 0;
}
