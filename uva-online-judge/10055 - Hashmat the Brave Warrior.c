#include<stdio.h>
int main()
{
    long long int x,y;
    while(scanf("%lld %lld",&x,&y)!=EOF){
        if(x<y){
            printf("%lld\n",y-x);
        }
        else{
            printf("%lld\n",x-y);
        }
    }
    return 0;
}
