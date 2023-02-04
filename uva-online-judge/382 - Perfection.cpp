#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,num,sum,flag=0;
    while(scanf("%d",&num)==1 && num>0)
    {
        if(flag==0){
            cout<<"PERFECTION OUTPUT\n";
            flag=1;
        }
        sum=0;
        for(i=1; i<=num/2; i++){
            if(num%i==0){
                sum=sum+i;
            }
        }
        if(sum==num) printf("%5d  PERFECT\n",num);
        else if(sum>num) printf("%5d  ABUNDANT\n",num);
        else if(sum<num) printf("%5d  DEFICIENT\n",num);
    }
    cout<<"END OF OUTPUT\n";
    return 0;
}
