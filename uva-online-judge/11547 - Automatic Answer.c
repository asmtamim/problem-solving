#include<stdio.h>
int main()
{
    int x,y;
    int a,ans,mod;
    scanf("%d",&y);
    for(x=1;x<=y;x++){
        scanf("%d",&a);
        ans=((((((a*567)/9)+7492)*235)/47)-498)/10;
        mod=ans%10;
        if(mod<0){
            mod=mod*(-1);
            printf("%d\n",mod);
        }
        else{
            printf("%d\n",mod);
        }
    }
    return 0;
}
