#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,data,sum;
    cin>>n;
    for(t=1; t<=n; t++)
    {
        sum=0;
        for(i=1; i<=13; i++){
            scanf("%d",&data);

            if(data>0) sum++;
            else sum--;
        }

        if(sum==13) printf("Set #%d: Yes\n",t);
        else printf("Set #%d: No\n",t);
    }
    return 0;
}
