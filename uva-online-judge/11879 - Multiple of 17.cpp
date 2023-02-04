#include<bits/stdc++.h>
using namespace std;
int main()
{
    char num[1001];
    long long i,sum,length;
    while(1)
    {
        cin>>num;
        length=strlen(num);
        if(num[0]=='0' && strlen(num)==1) break;

        sum=0;
        for(i=0; i<length; i+=1){
            sum=sum*10+num[i]-'0';
            sum=sum%17;
        }

        if(sum==0){
            cout<<"1"<<endl;
        }
        else{
            cout<<"0"<<endl;
        }
    }
    return 0;
}
