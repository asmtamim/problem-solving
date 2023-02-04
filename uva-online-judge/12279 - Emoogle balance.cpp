#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1,i,n,x;
    while(scanf("%d",&n)==1 && n>0)
    {
        int sum=0,sub=0,balance;
        for(i=1; i<=n; i++){
            scanf("%d",&x);
            if(x>0) sum++;
            else if(x==0) sub++;
        }
        balance=sum-sub;
        printf("Case %d: %d\n",t,balance);
        t++;
    }
    return 0;
}
