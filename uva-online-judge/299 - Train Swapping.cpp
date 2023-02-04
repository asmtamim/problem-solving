#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,L,i,j,temp,sum,train[50];
    cin>>t;
    while(t--)
    {
        sum=0;
        scanf("%d",&L);
        for(i=0; i<L; i++){
            scanf("%d",&train[i]);
        }

        for(i=0; i<L-1; i++){
            for(j=0; j<L-1; j++){
                if(train[j+1]<train[j]){
                    temp=train[j];
                    train[j]=train[j+1];
                    train[j+1]=temp;
                    sum++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<sum<<" swaps."<<endl;
    }
    return 0;
}

