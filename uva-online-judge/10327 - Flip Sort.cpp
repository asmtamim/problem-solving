#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,N,i,j,temp,sum,data[1000];
    while(scanf("%d",&N)!=EOF)
    {
        sum=0;
        for(i=0; i<N; i++){
            scanf("%d",&data[i]);
        }

        for(i=0; i<N-1; i++){
            for(j=0; j<N-1; j++){
                if(data[j+1]<data[j]){
                    temp=data[j];
                    data[j]=data[j+1];
                    data[j+1]=temp;
                    sum++;
                }
            }
        }
        cout<<"Minimum exchange operations : "<<sum<<endl;
    }
    return 0;
}


