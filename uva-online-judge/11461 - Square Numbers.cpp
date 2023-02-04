#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,i,j,sum;
    double k;
    while(scanf("%lld %lld",&a,&b)==2 && a>0 && b>0)
    {
        sum=0;
        for(i=a; i<=b; i++){
            j=sqrt(i);
            k=sqrt(i);
            if(j==k){
                sum++;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
