#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, ar1[3001], ar2[3001], i, flag;
    while(scanf("%d", &n)==1)
    {
        flag=1;
        for(i=0; i<n; i++){
            scanf("%d", &ar1[i]);
        }
        for(i=0; i<n-1; i++){
            ar2[i]=abs(ar1[i+1]-ar1[i]);
        }

        sort(ar2, ar2+i);
        for(i=1; i<n; i++){
            if(ar2[i]==ar2[i-1]){
                flag=0;
                break;
            }
        }

        if(flag==0) printf("Not jolly\n");
        else printf("Jolly\n");
    }
    return 0;
}
