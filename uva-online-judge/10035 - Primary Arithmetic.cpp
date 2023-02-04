#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, modA, modB, sum, carry;
    while(scanf("%lld %lld",&a,&b)==2)
    {
        if(a==0 && b==0) break;

        carry=0;
        sum=0;
        while(a>0 || b>0)
        {
            modA = a%10;
                a=a/10;
            modB = b%10;
                b=b/10;

            if(sum+(modA+modB)>9){
                carry+=1;
                sum=1;
            }
            else{
                sum=0;
            }
        }
        if(carry==0) printf("No carry operation.\n");
        else if(carry==1) printf("1 carry operation.\n");
        else printf("%lld carry operations.\n",carry);
    }
    return 0;
}
