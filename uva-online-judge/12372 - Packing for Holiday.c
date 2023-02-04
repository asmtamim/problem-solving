#include<stdio.h>
int main()
{
    int x,y;
    int l,w,h;
    scanf("%d",&y);
    for(x=1;x<=y;x++){
        scanf("%d %d %d",&l,&w,&h);
        if(l>=1 && l<=20 && w>=1 && w<=20 && h>=1 && h<=20){
            printf("Case %d: good\n",x);
        }
        else{
            printf("Case %d: bad\n",x);
        }
    }
    return 0;
}
