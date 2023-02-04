#include<stdio.h>
int main()
{
    int x,y;
    int n,k,p,ans;
    scanf("%d",&y);
    for(x=1; x<=y; x++)
    {
        scanf("%d %d %d",&n,&k,&p);
        ans=p+k;

        while(ans>n){
            ans=ans-n;
        }
        printf("Case %d: %d\n",x,ans);
    }
    return 0;
}
