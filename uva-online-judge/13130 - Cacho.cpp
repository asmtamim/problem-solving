#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,arr[5];
    cin>>t;
    while(t--)
    {
        for(i=0; i<5; i++){
            scanf("%d",&arr[i]);
        }
        if(arr[0]==1 && arr[1]==2 && arr[2]==3 && arr[3]==4 && arr[4]==5) cout<<"Y\n";
        else if(arr[0]==2 && arr[1]==3 && arr[2]==4 && arr[3]==5 && arr[4]==6) cout<<"Y\n";
        else cout<<"N\n";
    }
    return 0;
}
